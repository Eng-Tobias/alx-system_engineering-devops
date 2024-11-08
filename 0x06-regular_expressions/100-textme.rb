#!/usr/bin/env ruby

# Input string from command line
log_entry = ARGV[0]

# Regular expressions to capture the sender, receiver, and flags
sender = log_entry.match(/\[from:(.*?)\]/)[1]
receiver = log_entry.match(/\[to:(.*?)\]/)[1]
flags = log_entry.match(/\[flags:(.*?)\]/)[1]

# Output in the required format
puts "#{sender},#{receiver},#{flags}"
