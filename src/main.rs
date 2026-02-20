use clap::{Parser, Subcommand};

#[derive(Parser, Debug)]
#[command(name = "pch")]
#[command(about = "pch - Perfect Clear Helper CLI Tools")]
#[command(version)]

struct Cli {
    #[command(subcommand)]
    command: Commands,
}

#[derive(Subcommand, Debug)]
enum Commands {
    Number {
        /// current piece count on an empty board.
        piece_count: u32,
        
        /// Determines 8th and 9th based on queue. 
        #[arg(short = 'q', long)]
        queue: Option<String>,

        /// Given a queue, also determine its class ("2 TILO", "6 no L").
        #[arg(short = 'c', long)]
        class: bool,

        /// Suppress output; sets exit code: 0 = success, 1 = fail.
        #[arg(short = 'Q', long)]
        quiet: bool,
    },
}

fn main() {
    let cli = Cli::parse();

    match cli.command {
        Commands::Number {
            piece_count,
            queue,
            class,
            quiet,
        } => {
            let mut number = (piece_count*5)%7+1;
            let mut class = String::new();

            if !quiet {
                if let Some(q) = queue {
                    // TODO: check if queue is valid
                    
                    if number == 1 {    // possible 8th
                        let mut anomally = false;
                        // TODO: from comparing the queue to "TIJLSZO" (in any order), does one piece replace another? and mark those pieces
                        // TODO: set class
                        if class && anomally == true {
                            if !verbose {
                                println!("{}{}", number, class);    
                            } else {
                                println!("{} replace {} {}th", class[0], class[1], number);
                            }
                        } else if class {
                            if !verbose {
                                println!("{}{}", number, class);    
                            } else {
                                println!("{} {}th", class, number);
                            }
                        }
                    } else if number == 2 {    // possible 9th
                        // TODO: from "TIJLSZO" in any order, does on piece replace another? and mark that piece
                        // TODO: set class
                    } else {
                        
                    }

                }



            }

            std::process::exit(if number { 0 } else { 1 });
        }
    }
}
