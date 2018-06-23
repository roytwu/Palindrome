-- Given a string, write a function to check if it is a
-- permutation of a palindrome

-- File name: permu_palindrome.lua
-- Programmer: TWu

-- dump key (k) and value (v) in table (tb)
function dump_tb(tb)
 	for k,v in pairs(tb) do
 		print("Key: "..k.." Value: "..v)
 	end
end

local count = 0
local index = {}
str = "rotor"
lenStr = string.len(str)

-- creat a table called "index"
-- Using ASCII code to create table
for i =97,122 do
 	index[string.char(i)] = 0
end

-- count how many times each character appears
for i = 1, lenStr do
	local sglStr =string.sub(str,i,i)
	index[sglStr] = index[sglStr]+1
end

-- no more than 2 character has an odd count
for k,v in pairs(index) do
	if (tonumber(v)%2 == 1) then
		count = count +1 
	end
end

if (count == 1 or count == 0 ) then
	print("Palindrome permutation is TRUE")
elseif count > 1 then
	print("Palindrome permutation is FALSE")
else
	print("code error")
end	


