class Phrase
  VERSION = 1
  def initialize(phrase)
    @phrase = phrase.downcase
    @phrase.gsub!(/[.,\/#!$%@\^&\*;:{}=\-_`~()]/," ")
    @phrase.gsub!(/\s'|'\s/, ' ')
    @phrase.gsub!(/\s{2,}/," ")
  end
  def word_count
    count = Hash.new
    words = @phrase.split(' ')
    words.each do |word|
      count[word] = words.count {|w| w == word}
    end
    count
  end
end