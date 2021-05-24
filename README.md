# JimmyCoin

   $$$$$\ $$\                                        $$$$$$\            $$\           
   \__$$ |\__|                                      $$  __$$\           \__|          
      $$ |$$\ $$$$$$\$$$$\  $$$$$$\$$$$\  $$\   $$\ $$ /  \__| $$$$$$\  $$\ $$$$$$$\  
      $$ |$$ |$$  _$$  _$$\ $$  _$$  _$$\ $$ |  $$ |$$ |      $$  __$$\ $$ |$$  __$$\ 
$$\   $$ |$$ |$$ / $$ / $$ |$$ / $$ / $$ |$$ |  $$ |$$ |      $$ /  $$ |$$ |$$ |  $$ |
$$ |  $$ |$$ |$$ | $$ | $$ |$$ | $$ | $$ |$$ |  $$ |$$ |  $$\ $$ |  $$ |$$ |$$ |  $$ |
\$$$$$$  |$$ |$$ | $$ | $$ |$$ | $$ | $$ |\$$$$$$$ |\$$$$$$  |\$$$$$$  |$$ |$$ |  $$ |
 \______/ \__|\__| \__| \__|\__| \__| \__| \____$$ | \______/  \______/ \__|\__|  \__|
                                          $$\   $$ |                                  
                                          \$$$$$$  |                                  
                                           \______/                                   

An experiment in creating a proof of work blockchain and P2P network in C. More generally, an attempt to develop my C programming, socket programming, networking and cryptography skills.

## Objectives

My basic goals for this project:

- Create a program capable of generating a blockchain structure
  - Create a protocol for a blockchain (block size, transaction format, mining etc)
  - Create a single program that implements that protocol and is capable of creating and mining blocks and adding them to a chain
  - Add the ability for said program to generate multiple wallets and track/validate transactions between those wallets on the chain
- Create a P2P networking aspect
  - Separate program into wallet and node where wallet acts as a client and node acts as a miner and validator
  - Figure out P2P structure (exact requirements to be decided later)
- Convince various crypt 'investors' on Twitter and Reddit that this is totally the next big thing
- Profit

### The JimmyCoin Protocol

#### Transaction Formats

Each transaction will consist of an input, transfer amount, output and signature. An input will be the wallet address of the sender alongside their public key, the transfer amount will be a positive integer for simplicity and the ouput will be the wallet address of the recipient. Below are the protocols cryptographic algorithms used for each aspect of payment.

- Wallet Addresses: SHA256 Hash of the wallet's public key
- Wallet keypairs:

#### Block Format

#### Mining Algorithm
