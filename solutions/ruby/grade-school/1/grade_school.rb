class School
  VERSION = 1
  @@grades = Hash.new
  def add(student, grade)
    @@grades[grade] ||= []
    @@grades[grade] << student
    @@grades[grade].sort! {|f, s| f <=> s}
  end
  def to_h
    @@grades.sort {|g1, g2| g1 <=> g2}.to_h
  end
  def grade(g)
    @@grades[g] ||= []
  end
end