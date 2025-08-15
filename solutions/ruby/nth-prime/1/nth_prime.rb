class Prime
  def self.nth(num)
    raise ArgumentError if num <= 0
    i = 2
    @primes = [2]
    while @primes.length < num
      i += 1
      is_prime = @primes.count {|x| i % x == 0} == 0
      @primes << i if is_prime
    end
    @primes.last
  end
end