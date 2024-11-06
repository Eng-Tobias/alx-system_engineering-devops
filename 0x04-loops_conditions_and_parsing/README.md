# SSH RSA Key Pair

This project involves creating an RSA key pair for SSH access to remote servers. The generated public key will be used for secure authentication when accessing the servers. The private key should be stored in a safe place and used when connecting to the servers.

## Task Description

- **Objective**: Generate an RSA key pair for SSH access.
- **Public Key**: The public key will be placed in the `0-RSA_public_key.pub` file and shared for SSH access configuration.
- **Private Key**: The private key is stored securely and is required to connect to remote servers. It should not be shared with others.

## Steps Taken

1. **RSA Key Pair Generation**:
   - Used the `ssh-keygen` command to generate a 4096-bit RSA key pair.
   - The public key was saved to `0-RSA_public_key.pub`.
   - The private key was saved in the default location (`/root/.ssh/id_rsa`).

2. **Public Key Shared**:
   - The public key was copied and uploaded to the intranet profile for SSH access configuration.

3. **Private Key Security**:
   - The private key was stored securely and should be kept in a safe location such as a password manager or an encrypted drive.

## Important Notes

- **Passphrase**: A passphrase was not set for the private key, but it is recommended to use one for additional security.
- **Key Security**: Never share the private key. The public key can be shared to set up SSH access on remote servers.

## Usage

To use the key pair for SSH access:

1. Copy the private key to your local machine or server.
2. Use the following SSH command to connect to your server:
   ```bash
   ssh -i /path/to/private/key user@server_address
