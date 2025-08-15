class Robot
  VERSION = 1
  attr_accessor :name
  @@names = []
  def initialize()
    @letters = ("A".."Z").to_a
    @numbers = ("0".."9").to_a
    reset
  end
  def reset
    @name = random_name
  end
  private
  def random_name
    name_l = (0..1).map {@letters[rand(@letters.length)]}.join
    name_n = (0..2).map {@numbers[rand(0..9)]}.join
    name = name_l + name_n
    name = random_name if @@names.any? {|n| n == name}
    @@names << name
    name
  end
end