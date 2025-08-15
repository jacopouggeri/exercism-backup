class Sieve
  def initialize(range)
    @range = (2..range).to_a
  end
  def primes
    @range.each do |num|
      @range.delete_if {|x| x != num && x % num == 0}
    end
    @range
  end
end