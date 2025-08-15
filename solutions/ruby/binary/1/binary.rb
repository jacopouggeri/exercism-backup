class Binary
  VERSION = 2
  def initialize(num)
    raise ArgumentError if num =~ /[^01]/
    @num = num
  end
  def to_decimal
    n = @num.reverse
    res = 0
    (0...n.length).each do |x|
      res += n[x].to_i * 2 ** x
    end
    res
  end
end