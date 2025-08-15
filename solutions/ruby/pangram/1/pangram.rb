class Pangram
  VERSION = 1
  def self.is_pangram?(str)
    letters = ('a'..'z').to_a - str.downcase.chars.to_a
    letters.empty?
  end
end