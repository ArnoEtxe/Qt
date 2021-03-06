/* Copyright (c) 2014, Google Inc.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

#include <openssl/err.h>

#include <openssl/pem.h>

const ERR_STRING_DATA PEM_error_string_data[] = {
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_ASN1_read, 0), "PEM_ASN1_read"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_ASN1_read_bio, 0), "PEM_ASN1_read_bio"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_ASN1_write, 0), "PEM_ASN1_write"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_ASN1_write_bio, 0), "PEM_ASN1_write_bio"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_X509_INFO_read, 0), "PEM_X509_INFO_read"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_X509_INFO_read_bio, 0), "PEM_X509_INFO_read_bio"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_X509_INFO_write_bio, 0), "PEM_X509_INFO_write_bio"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_do_header, 0), "PEM_do_header"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_get_EVP_CIPHER_INFO, 0), "PEM_get_EVP_CIPHER_INFO"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_read, 0), "PEM_read"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_read_DHparams, 0), "PEM_read_DHparams"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_read_PrivateKey, 0), "PEM_read_PrivateKey"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_read_bio, 0), "PEM_read_bio"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_read_bio_DHparams, 0), "PEM_read_bio_DHparams"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_read_bio_Parameters, 0), "PEM_read_bio_Parameters"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_read_bio_PrivateKey, 0), "PEM_read_bio_PrivateKey"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_write, 0), "PEM_write"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_write_PrivateKey, 0), "PEM_write_PrivateKey"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_PEM_write_bio, 0), "PEM_write_bio"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_d2i_PKCS8PrivateKey_bio, 0), "d2i_PKCS8PrivateKey_bio"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_d2i_PKCS8PrivateKey_fp, 0), "d2i_PKCS8PrivateKey_fp"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_do_pk8pkey, 0), "do_pk8pkey"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_do_pk8pkey_fp, 0), "do_pk8pkey_fp"},
  {ERR_PACK(ERR_LIB_PEM, PEM_F_load_iv, 0), "load_iv"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BAD_BASE64_DECODE), "BAD_BASE64_DECODE"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BAD_DECRYPT), "BAD_DECRYPT"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BAD_END_LINE), "BAD_END_LINE"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BAD_IV_CHARS), "BAD_IV_CHARS"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BAD_MAGIC_NUMBER), "BAD_MAGIC_NUMBER"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BAD_PASSWORD_READ), "BAD_PASSWORD_READ"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BAD_VERSION_NUMBER), "BAD_VERSION_NUMBER"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_BIO_WRITE_FAILURE), "BIO_WRITE_FAILURE"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_CIPHER_IS_NULL), "CIPHER_IS_NULL"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_ERROR_CONVERTING_PRIVATE_KEY), "ERROR_CONVERTING_PRIVATE_KEY"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_EXPECTING_PRIVATE_KEY_BLOB), "EXPECTING_PRIVATE_KEY_BLOB"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_EXPECTING_PUBLIC_KEY_BLOB), "EXPECTING_PUBLIC_KEY_BLOB"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_INCONSISTENT_HEADER), "INCONSISTENT_HEADER"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_KEYBLOB_HEADER_PARSE_ERROR), "KEYBLOB_HEADER_PARSE_ERROR"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_KEYBLOB_TOO_SHORT), "KEYBLOB_TOO_SHORT"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_NOT_DEK_INFO), "NOT_DEK_INFO"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_NOT_ENCRYPTED), "NOT_ENCRYPTED"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_NOT_PROC_TYPE), "NOT_PROC_TYPE"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_NO_START_LINE), "NO_START_LINE"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_PROBLEMS_GETTING_PASSWORD), "PROBLEMS_GETTING_PASSWORD"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_PUBLIC_KEY_NO_RSA), "PUBLIC_KEY_NO_RSA"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_PVK_DATA_TOO_SHORT), "PVK_DATA_TOO_SHORT"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_PVK_TOO_SHORT), "PVK_TOO_SHORT"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_READ_KEY), "READ_KEY"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_SHORT_HEADER), "SHORT_HEADER"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_UNSUPPORTED_CIPHER), "UNSUPPORTED_CIPHER"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_UNSUPPORTED_ENCRYPTION), "UNSUPPORTED_ENCRYPTION"},
  {ERR_PACK(ERR_LIB_PEM, 0, PEM_R_UNSUPPORTED_KEY_COMPONENTS), "UNSUPPORTED_KEY_COMPONENTS"},
  {0, NULL},
};
