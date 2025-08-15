class SumOfMultiples
  def initialize(*nums)
    if nums.none?
      @nums = [3, 5]
    end
    @nums = nums
  end
  def to(num)
    sum = 0
    @nums.each do |n|
      multiples = (0...num).select {|x| x % n == 0}
      multiples.each {|y| sum += y}
    end
    sum
  end
end