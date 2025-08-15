class Hamming
  def self.compute(str1, str2)
    raise ArgumentError if str1.length != str2.length
    distance = 0
    (0...str1.length).each do |i|
      distance += 1 if str1[i] != str2[i]
    end
    distance
  end
end