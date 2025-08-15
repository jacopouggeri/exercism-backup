class Squares
  attr_reader :sum_of_squares
  attr_reader :square_of_sum
  attr_reader :difference_of_squares
  def initialize(num)
    @sum_of_squares = 0
    sum = 0
    for i in 1..num
      @sum_of_squares += i**2
      sum += i
    end
    @square_of_sum = sum ** 2
    @difference_of_squares = @square_of_sum - @sum_of_squares
  end
end