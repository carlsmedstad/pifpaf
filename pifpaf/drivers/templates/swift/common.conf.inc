mount_check = false
disable_fallocate = true
workers = 1
bind_ip = 127.0.0.1
user = {{ USER }}
swift_dir = {{ TMP_DIR }}
devices = {{ TMP_DIR }}/data
recon_cache_path =  {{ TMP_DIR }}
log_address = {{ TMP_DIR }}/log
log_level = DEBUG