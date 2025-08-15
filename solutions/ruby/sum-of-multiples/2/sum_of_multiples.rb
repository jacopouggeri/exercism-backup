class SumOfMultiples
  def initialize(*nums)
    @nums = [3, 5] if nums.none?
    @nums ||= nums
  end
  def to(num)
    sum = 0
    @nums.each do |n|
      multiples = (0...num).select {|x| x % n == 0}
      sum += multiples.inject {|s, y| s + y}
    end
    sum
  end
end