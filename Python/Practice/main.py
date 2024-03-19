import re

# parse content to dictionary
def parse_content(content):
    variables = {}
    lines = content.split("\n")
    for line in lines:
        if line.strip():
            parts = line.strip().split("=")
            key = parts[0].strip()
            value = "=".join(parts[1:]).strip()
            variables[key] = value
    return variables

# replace variables
def replace_variables(content, variables):
    while True:
        replaced = False
        for var_name, var_value in variables.items():
            if f"%{var_name}%" in content:
                content = content.replace(f"%{var_name}%", var_value)
                replaced = True
        if not replaced:
            break
    return content


# read cfg file and remove redundant file
with open("Python/Practice/env.txt", "r") as file:
    content = file.read()
    content = re.sub(r"#.*\n", "", content)

# parse into dict
variables = parse_content(content)

# replace variable
cd_value = variables.get("%CD%")
variables.pop("%CD%")
content = replace_variables(content, variables).replace("%CD%", cd_value)
content = re.sub(f"{cd_value}.*?{cd_value}\n","",content)

# update cfg file
with open("Python/Practice/tmp.txt", "w") as file:
    file.write(content)
