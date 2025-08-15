class Hamming
  def self.compute(str1, str2)
    raise ArgumentError if str1.length != str2.length
    distance = (0...str1.length).find_all {|i| str1[i] != str2[i]}.length
    distance
  end
end