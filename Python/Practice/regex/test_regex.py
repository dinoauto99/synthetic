import re
import sys
from configparser import ConfigParser

# section=sys.argv[2]
# cfg_path = sys.argv[1]

cfg_path = "G:/Workspace/synthetic/Python/Practice/regex/env.cfg"
cfg_parser = ConfigParser.read(cfg_path)

print(cfg_parser)
