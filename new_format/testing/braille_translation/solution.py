import string

spacebraille = '000000'

upperbraille = '000001'

braille_alpha = [
    '100000', 
    '110000', 
    '100100', 
    '100110', 
    '100010', 
    '110100', 
    '110110', 
    '110010', 
    '010100', 
    '010110', 
    '101000', 
    '111000', 
    '101100', 
    '101110', 
    '101010', 
    '111100', 
    '111110', 
    '111010', 
    '011100', 
    '011110', 
    '101001', 
    '111001', 
    '010111', 
    '101101', 
    '101111', 
    '101011', 
]

braille_list = braille_alpha + [upperbraille + s for s in braille_alpha] + [spacebraille]

ascii_list = list(string.ascii_lowercase + string.ascii_uppercase + " ")

translation_table = dict(zip(ascii_list, braille_list))

def solution(s):
    characters = list(s)
    braille = [translation_table[v] for v in characters if v in characters]
    return ''.join(braille)