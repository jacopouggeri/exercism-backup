def primes(num)
  an = 2
  primes = [2]
  loop do
    an += 1
    pr = true
    primes.each do |x|
      pr = false if an % x == 0
    end
    primes.push(an) if pr == true
    break if primes.length >= num
  end
  return primes
end

class PrimeFactors
  def self.for(int)
    r = []
    to_a = int
    primes(int).each do |i|
      return [] if int == i || int == 1
      loop do
        if to_a % i == 0
          to_a /= i
          r.push(i) unless r[r.length] == i
        else
          break
        end
      end
    end
    r
  end
end