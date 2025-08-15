class FoodChain
  VERSION = 2
  @animals = ['fly', 'spider', 'bird', 'cat', 'dog', 'goat', 'cow', 'horse']
  @song = ''
  @start = "I know an old lady who swallowed a"
  @end_ = "I don't know why she swallowed the fly. Perhaps she'll die.\n\n"
  @end__ = "She's dead, of course!"
  @s_action = "wriggled and jiggled and tickled inside her.\n"
  @comment1 = " to swallow a "
  @comment2 = " swallowed a "
  def self.cause(a, b)
    return '' if a == "fly"
    c = "She swallowed the #{a} to catch the #{b}"
    c += b == 'spider' ? " that #{@s_action}" : ".\n"
  end
  def self.comment(a)
    to_a = "#{a}!\n"
    case a
    when "spider" then @song << "It #{@s_action}"
    when "bird" then @song << "How absurd#{@comment1}#{to_a}"
    when "cat" then @song << "Imagine that,#{@comment1}#{to_a}"
    when "dog" then @song << "What a hog,#{@comment1}#{to_a}"
    when "goat" then @song << "Just opened her throat and#{@comment2}#{to_a}"
    when "cow" then @song << "I don't know how she#{@comment2}#{to_a}"
    end
  end
   def self.song
    (0...@animals.length).each do |i|
      @song << "#{@start} #{@animals[i]}.\n"
      part = ""
      comment(@animals[i])
      (0...i).each do |x|
        part.prepend(cause(@animals[x+1], @animals[x]))
      end
      @song << part if i != 7
      @song += (@animals[i] == 'horse') ? "#{@end__}" : "#{@end_}"
    end
    @song
  end
end

puts FoodChain.song