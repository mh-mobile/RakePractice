require "rake/clean"

 SRCS = FileList["**/*.c"]
 OBJS = SRCS.ext("o")

 CLEAN.include(OBJS)
 CLOBBER.include("hello")

namespace :practice do
    task :default => "show"

    CC = "gcc"

    desc "show greeting message"
    task :show => "hello" do
        sh "./hello"
    end

    file "hello" => ["main.o", "greeting.o"] do |t|
       sh "#{CC} -o #{t.name} #{t.prerequisites.join(' ')}"
    end

    rule ".o" => ".c" do |t|
      sh "#{CC} -c #{t.source}"
    end

end