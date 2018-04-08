
CC =	cl
CFLAGS =  -O2  -W3 -WX -nologo -MT -Zi -DFD_SETSIZE=1024 -DNO_SYS_TYPES_H
CPP =	
LINK =	$(CC)


ALL_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/win32 \
	-I ../nginx-rtmp-module \
	-I ../pcre \
	-I ./include \
	-I ../zlib \
	-I build \
	-I src/http \
	-I src/http/modules


CORE_DEPS = src/core/nginx.h \
	src/core/ngx_config.h \
	src/core/ngx_core.h \
	src/core/ngx_log.h \
	src/core/ngx_palloc.h \
	src/core/ngx_array.h \
	src/core/ngx_list.h \
	src/core/ngx_hash.h \
	src/core/ngx_buf.h \
	src/core/ngx_queue.h \
	src/core/ngx_string.h \
	src/core/ngx_parse.h \
	src/core/ngx_parse_time.h \
	src/core/ngx_inet.h \
	src/core/ngx_file.h \
	src/core/ngx_crc.h \
	src/core/ngx_crc32.h \
	src/core/ngx_murmurhash.h \
	src/core/ngx_md5.h \
	src/core/ngx_sha1.h \
	src/core/ngx_rbtree.h \
	src/core/ngx_radix_tree.h \
	src/core/ngx_rwlock.h \
	src/core/ngx_slab.h \
	src/core/ngx_times.h \
	src/core/ngx_shmtx.h \
	src/core/ngx_connection.h \
	src/core/ngx_cycle.h \
	src/core/ngx_conf_file.h \
	src/core/ngx_module.h \
	src/core/ngx_resolver.h \
	src/core/ngx_open_file_cache.h \
	src/core/ngx_crypt.h \
	src/core/ngx_proxy_protocol.h \
	src/core/ngx_syslog.h \
	src/event/ngx_event.h \
	src/event/ngx_event_timer.h \
	src/event/ngx_event_posted.h \
	src/event/ngx_event_connect.h \
	src/event/ngx_event_pipe.h \
	src/os/win32/ngx_win32_config.h \
	src/os/win32/ngx_time.h \
	src/os/win32/ngx_errno.h \
	src/os/win32/ngx_alloc.h \
	src/os/win32/ngx_files.h \
	src/os/win32/ngx_shmem.h \
	src/os/win32/ngx_process.h \
	src/os/win32/ngx_atomic.h \
	src/os/win32/ngx_thread.h \
	src/os/win32/ngx_socket.h \
	src/os/win32/ngx_os.h \
	src/os/win32/ngx_user.h \
	src/os/win32/ngx_dlopen.h \
	src/os/win32/ngx_process_cycle.h \
	src/event/ngx_event_openssl.h \
	src/core/ngx_regex.h \
	../pcre/pcre.h \
	./include/openssl/ssl.h \
	build/ngx_auto_config.h \
	build/ngx_config.pch


CORE_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/win32 \
	-I ../nginx-rtmp-module \
	-I ../pcre \
	-I ./include \
	-I ../zlib \
	-I build


HTTP_DEPS = src/http/ngx_http.h \
	src/http/ngx_http_request.h \
	src/http/ngx_http_config.h \
	src/http/ngx_http_core_module.h \
	src/http/ngx_http_cache.h \
	src/http/ngx_http_variables.h \
	src/http/ngx_http_script.h \
	src/http/ngx_http_upstream.h \
	src/http/ngx_http_upstream_round_robin.h \
	src/http/modules/ngx_http_ssi_filter_module.h \
	src/http/modules/ngx_http_ssl_module.h


HTTP_INCS = -I src/http \
	-I src/http/modules


ADDON_DEPS = $(CORE_DEPS)                                                                   ../nginx-rtmp-module/ngx_rtmp_amf.h                               ../nginx-rtmp-module/ngx_rtmp_bandwidth.h                         ../nginx-rtmp-module/ngx_rtmp_cmd_module.h                        ../nginx-rtmp-module/ngx_rtmp_codec_module.h                      ../nginx-rtmp-module/ngx_rtmp_eval.h                              ../nginx-rtmp-module/ngx_rtmp.h                                   ../nginx-rtmp-module/ngx_rtmp_version.h                           ../nginx-rtmp-module/ngx_rtmp_live_module.h                       ../nginx-rtmp-module/ngx_rtmp_netcall_module.h                    ../nginx-rtmp-module/ngx_rtmp_play_module.h                       ../nginx-rtmp-module/ngx_rtmp_record_module.h                     ../nginx-rtmp-module/ngx_rtmp_relay_module.h                      ../nginx-rtmp-module/ngx_rtmp_streams.h                           ../nginx-rtmp-module/ngx_rtmp_bitop.h                             ../nginx-rtmp-module/ngx_rtmp_proxy_protocol.h                    ../nginx-rtmp-module/hls/ngx_rtmp_mpegts.h                        ../nginx-rtmp-module/dash/ngx_rtmp_mp4.h                           $(HTTP_DEPS)


build:	binary modules #manpage

binary:	build/nginx.exe

build/nginx.exe:	build/src/core/nginx.obj \
	build/src/core/ngx_log.obj \
	build/src/core/ngx_palloc.obj \
	build/src/core/ngx_array.obj \
	build/src/core/ngx_list.obj \
	build/src/core/ngx_hash.obj \
	build/src/core/ngx_buf.obj \
	build/src/core/ngx_queue.obj \
	build/src/core/ngx_output_chain.obj \
	build/src/core/ngx_string.obj \
	build/src/core/ngx_parse.obj \
	build/src/core/ngx_parse_time.obj \
	build/src/core/ngx_inet.obj \
	build/src/core/ngx_file.obj \
	build/src/core/ngx_crc32.obj \
	build/src/core/ngx_murmurhash.obj \
	build/src/core/ngx_md5.obj \
	build/src/core/ngx_sha1.obj \
	build/src/core/ngx_rbtree.obj \
	build/src/core/ngx_radix_tree.obj \
	build/src/core/ngx_slab.obj \
	build/src/core/ngx_times.obj \
	build/src/core/ngx_shmtx.obj \
	build/src/core/ngx_connection.obj \
	build/src/core/ngx_cycle.obj \
	build/src/core/ngx_spinlock.obj \
	build/src/core/ngx_rwlock.obj \
	build/src/core/ngx_cpuinfo.obj \
	build/src/core/ngx_conf_file.obj \
	build/src/core/ngx_module.obj \
	build/src/core/ngx_resolver.obj \
	build/src/core/ngx_open_file_cache.obj \
	build/src/core/ngx_crypt.obj \
	build/src/core/ngx_proxy_protocol.obj \
	build/src/core/ngx_syslog.obj \
	build/src/event/ngx_event.obj \
	build/src/event/ngx_event_timer.obj \
	build/src/event/ngx_event_posted.obj \
	build/src/event/ngx_event_accept.obj \
	build/src/event/ngx_event_connect.obj \
	build/src/event/ngx_event_pipe.obj \
	build/src/os/win32/ngx_errno.obj \
	build/src/os/win32/ngx_alloc.obj \
	build/src/os/win32/ngx_files.obj \
	build/src/os/win32/ngx_shmem.obj \
	build/src/os/win32/ngx_time.obj \
	build/src/os/win32/ngx_process.obj \
	build/src/os/win32/ngx_thread.obj \
	build/src/os/win32/ngx_socket.obj \
	build/src/os/win32/ngx_wsarecv.obj \
	build/src/os/win32/ngx_wsarecv_chain.obj \
	build/src/os/win32/ngx_udp_wsarecv.obj \
	build/src/os/win32/ngx_wsasend.obj \
	build/src/os/win32/ngx_wsasend_chain.obj \
	build/src/os/win32/ngx_win32_init.obj \
	build/src/os/win32/ngx_user.obj \
	build/src/os/win32/ngx_dlopen.obj \
	build/src/os/win32/ngx_event_log.obj \
	build/src/os/win32/ngx_process_cycle.obj \
	build/src/event/ngx_event_acceptex.obj \
	build/src/event/modules/ngx_iocp_module.obj \
	build/src/event/modules/ngx_win32_select_module.obj \
	build/src/event/ngx_event_openssl.obj \
	build/src/event/ngx_event_openssl_stapling.obj \
	build/src/core/ngx_regex.obj \
	build/src/http/ngx_http.obj \
	build/src/http/ngx_http_core_module.obj \
	build/src/http/ngx_http_special_response.obj \
	build/src/http/ngx_http_request.obj \
	build/src/http/ngx_http_parse.obj \
	build/src/http/modules/ngx_http_log_module.obj \
	build/src/http/ngx_http_request_body.obj \
	build/src/http/ngx_http_variables.obj \
	build/src/http/ngx_http_script.obj \
	build/src/http/ngx_http_upstream.obj \
	build/src/http/ngx_http_upstream_round_robin.obj \
	build/src/http/ngx_http_file_cache.obj \
	build/src/http/ngx_http_write_filter_module.obj \
	build/src/http/ngx_http_header_filter_module.obj \
	build/src/http/modules/ngx_http_chunked_filter_module.obj \
	build/src/http/modules/ngx_http_range_filter_module.obj \
	build/src/http/modules/ngx_http_gzip_filter_module.obj \
	build/src/http/ngx_http_postpone_filter_module.obj \
	build/src/http/modules/ngx_http_ssi_filter_module.obj \
	build/src/http/modules/ngx_http_charset_filter_module.obj \
	build/src/http/modules/ngx_http_sub_filter_module.obj \
	build/src/http/modules/ngx_http_userid_filter_module.obj \
	build/src/http/modules/ngx_http_headers_filter_module.obj \
	build/src/http/ngx_http_copy_filter_module.obj \
	build/src/http/modules/ngx_http_not_modified_filter_module.obj \
	build/src/http/modules/ngx_http_static_module.obj \
	build/src/http/modules/ngx_http_autoindex_module.obj \
	build/src/http/modules/ngx_http_index_module.obj \
	build/src/http/modules/ngx_http_auth_basic_module.obj \
	build/src/http/modules/ngx_http_access_module.obj \
	build/src/http/modules/ngx_http_limit_conn_module.obj \
	build/src/http/modules/ngx_http_limit_req_module.obj \
	build/src/http/modules/ngx_http_geo_module.obj \
	build/src/http/modules/ngx_http_map_module.obj \
	build/src/http/modules/ngx_http_split_clients_module.obj \
	build/src/http/modules/ngx_http_referer_module.obj \
	build/src/http/modules/ngx_http_rewrite_module.obj \
	build/src/http/modules/ngx_http_ssl_module.obj \
	build/src/http/modules/ngx_http_proxy_module.obj \
	build/src/http/modules/ngx_http_fastcgi_module.obj \
	build/src/http/modules/ngx_http_uwsgi_module.obj \
	build/src/http/modules/ngx_http_scgi_module.obj \
	build/src/http/modules/ngx_http_memcached_module.obj \
	build/src/http/modules/ngx_http_empty_gif_module.obj \
	build/src/http/modules/ngx_http_browser_module.obj \
	build/src/http/modules/ngx_http_upstream_hash_module.obj \
	build/src/http/modules/ngx_http_upstream_ip_hash_module.obj \
	build/src/http/modules/ngx_http_upstream_least_conn_module.obj \
	build/src/http/modules/ngx_http_upstream_keepalive_module.obj \
	build/src/http/modules/ngx_http_upstream_zone_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_init.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_handshake.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_handler.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_amf.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_send.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_shared.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_eval.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_receive.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_core_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_codec_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_access_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_record_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_live_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_play_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_flv_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_relay_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_exec_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_notify_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_log_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_limit_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_bitop.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.obj \
	build/addon/hls/ngx_rtmp_hls_module.obj \
	build/addon/dash/ngx_rtmp_dash_module.obj \
	build/addon/hls/ngx_rtmp_mpegts.obj \
	build/addon/dash/ngx_rtmp_mp4.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_stat_module.obj \
	build/addon/nginx-rtmp-module/ngx_rtmp_control_module.obj \
	build/ngx_modules.obj \
	build/nginx.res \
	../pcre/pcre.lib \
	../zlib/zlib.lib
	$(LINK) @<<
	-Febuild/nginx
	build/src/core/nginx.obj 
	build/src/core/ngx_log.obj 
	build/src/core/ngx_palloc.obj 
	build/src/core/ngx_array.obj 
	build/src/core/ngx_list.obj 
	build/src/core/ngx_hash.obj 
	build/src/core/ngx_buf.obj 
	build/src/core/ngx_queue.obj 
	build/src/core/ngx_output_chain.obj 
	build/src/core/ngx_string.obj 
	build/src/core/ngx_parse.obj 
	build/src/core/ngx_parse_time.obj 
	build/src/core/ngx_inet.obj 
	build/src/core/ngx_file.obj 
	build/src/core/ngx_crc32.obj 
	build/src/core/ngx_murmurhash.obj 
	build/src/core/ngx_md5.obj 
	build/src/core/ngx_sha1.obj 
	build/src/core/ngx_rbtree.obj 
	build/src/core/ngx_radix_tree.obj 
	build/src/core/ngx_slab.obj 
	build/src/core/ngx_times.obj 
	build/src/core/ngx_shmtx.obj 
	build/src/core/ngx_connection.obj 
	build/src/core/ngx_cycle.obj 
	build/src/core/ngx_spinlock.obj 
	build/src/core/ngx_rwlock.obj 
	build/src/core/ngx_cpuinfo.obj 
	build/src/core/ngx_conf_file.obj 
	build/src/core/ngx_module.obj 
	build/src/core/ngx_resolver.obj 
	build/src/core/ngx_open_file_cache.obj 
	build/src/core/ngx_crypt.obj 
	build/src/core/ngx_proxy_protocol.obj 
	build/src/core/ngx_syslog.obj 
	build/src/event/ngx_event.obj 
	build/src/event/ngx_event_timer.obj 
	build/src/event/ngx_event_posted.obj 
	build/src/event/ngx_event_accept.obj 
	build/src/event/ngx_event_connect.obj 
	build/src/event/ngx_event_pipe.obj 
	build/src/os/win32/ngx_errno.obj 
	build/src/os/win32/ngx_alloc.obj 
	build/src/os/win32/ngx_files.obj 
	build/src/os/win32/ngx_shmem.obj 
	build/src/os/win32/ngx_time.obj 
	build/src/os/win32/ngx_process.obj 
	build/src/os/win32/ngx_thread.obj 
	build/src/os/win32/ngx_socket.obj 
	build/src/os/win32/ngx_wsarecv.obj 
	build/src/os/win32/ngx_wsarecv_chain.obj 
	build/src/os/win32/ngx_udp_wsarecv.obj 
	build/src/os/win32/ngx_wsasend.obj 
	build/src/os/win32/ngx_wsasend_chain.obj 
	build/src/os/win32/ngx_win32_init.obj 
	build/src/os/win32/ngx_user.obj 
	build/src/os/win32/ngx_dlopen.obj 
	build/src/os/win32/ngx_event_log.obj 
	build/src/os/win32/ngx_process_cycle.obj 
	build/src/event/ngx_event_acceptex.obj 
	build/src/event/modules/ngx_iocp_module.obj 
	build/src/event/modules/ngx_win32_select_module.obj 
	build/src/event/ngx_event_openssl.obj 
	build/src/event/ngx_event_openssl_stapling.obj 
	build/src/core/ngx_regex.obj 
	build/src/http/ngx_http.obj 
	build/src/http/ngx_http_core_module.obj 
	build/src/http/ngx_http_special_response.obj 
	build/src/http/ngx_http_request.obj 
	build/src/http/ngx_http_parse.obj 
	build/src/http/modules/ngx_http_log_module.obj 
	build/src/http/ngx_http_request_body.obj 
	build/src/http/ngx_http_variables.obj 
	build/src/http/ngx_http_script.obj 
	build/src/http/ngx_http_upstream.obj 
	build/src/http/ngx_http_upstream_round_robin.obj 
	build/src/http/ngx_http_file_cache.obj 
	build/src/http/ngx_http_write_filter_module.obj 
	build/src/http/ngx_http_header_filter_module.obj 
	build/src/http/modules/ngx_http_chunked_filter_module.obj 
	build/src/http/modules/ngx_http_range_filter_module.obj 
	build/src/http/modules/ngx_http_gzip_filter_module.obj 
	build/src/http/ngx_http_postpone_filter_module.obj 
	build/src/http/modules/ngx_http_ssi_filter_module.obj 
	build/src/http/modules/ngx_http_charset_filter_module.obj 
	build/src/http/modules/ngx_http_sub_filter_module.obj 
	build/src/http/modules/ngx_http_userid_filter_module.obj 
	build/src/http/modules/ngx_http_headers_filter_module.obj 
	build/src/http/ngx_http_copy_filter_module.obj 
	build/src/http/modules/ngx_http_not_modified_filter_module.obj 
	build/src/http/modules/ngx_http_static_module.obj 
	build/src/http/modules/ngx_http_autoindex_module.obj 
	build/src/http/modules/ngx_http_index_module.obj 
	build/src/http/modules/ngx_http_auth_basic_module.obj 
	build/src/http/modules/ngx_http_access_module.obj 
	build/src/http/modules/ngx_http_limit_conn_module.obj 
	build/src/http/modules/ngx_http_limit_req_module.obj 
	build/src/http/modules/ngx_http_geo_module.obj 
	build/src/http/modules/ngx_http_map_module.obj 
	build/src/http/modules/ngx_http_split_clients_module.obj 
	build/src/http/modules/ngx_http_referer_module.obj 
	build/src/http/modules/ngx_http_rewrite_module.obj 
	build/src/http/modules/ngx_http_ssl_module.obj 
	build/src/http/modules/ngx_http_proxy_module.obj 
	build/src/http/modules/ngx_http_fastcgi_module.obj 
	build/src/http/modules/ngx_http_uwsgi_module.obj 
	build/src/http/modules/ngx_http_scgi_module.obj 
	build/src/http/modules/ngx_http_memcached_module.obj 
	build/src/http/modules/ngx_http_empty_gif_module.obj 
	build/src/http/modules/ngx_http_browser_module.obj 
	build/src/http/modules/ngx_http_upstream_hash_module.obj 
	build/src/http/modules/ngx_http_upstream_ip_hash_module.obj 
	build/src/http/modules/ngx_http_upstream_least_conn_module.obj 
	build/src/http/modules/ngx_http_upstream_keepalive_module.obj 
	build/src/http/modules/ngx_http_upstream_zone_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_init.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_handshake.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_handler.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_amf.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_send.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_shared.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_eval.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_receive.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_core_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_codec_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_access_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_record_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_live_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_play_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_flv_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_relay_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_exec_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_notify_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_log_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_limit_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_bitop.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.obj 
	build/addon/hls/ngx_rtmp_hls_module.obj 
	build/addon/dash/ngx_rtmp_dash_module.obj 
	build/addon/hls/ngx_rtmp_mpegts.obj 
	build/addon/dash/ngx_rtmp_mp4.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_stat_module.obj 
	build/addon/nginx-rtmp-module/ngx_rtmp_control_module.obj 
	build/ngx_modules.obj 
	kernel32.lib user32.lib advapi32.lib ws2_32.lib legacy_stdio_definitions.lib ../pcre/pcre.lib ./libs/openssl/libcrypto32MT.lib ./libs/openssl/libssl32MT.lib gdi32.lib crypt32.lib ../zlib/zlib.lib 
	build/nginx.res -link -verbose:lib -debug build/ngx_pch.obj
	
<<

modules:

build/ngx_modules.obj:	$(CORE_DEPS) \
	build/ngx_modules.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/ngx_modules.obj \
		build/ngx_modules.c


build/src/core/nginx.obj:	$(CORE_DEPS) \
	src/core/nginx.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/nginx.obj \
		src/core/nginx.c


build/src/core/ngx_log.obj:	$(CORE_DEPS) \
	src/core/ngx_log.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_log.obj \
		src/core/ngx_log.c


build/src/core/ngx_palloc.obj:	$(CORE_DEPS) \
	src/core/ngx_palloc.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_palloc.obj \
		src/core/ngx_palloc.c


build/src/core/ngx_array.obj:	$(CORE_DEPS) \
	src/core/ngx_array.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_array.obj \
		src/core/ngx_array.c


build/src/core/ngx_list.obj:	$(CORE_DEPS) \
	src/core/ngx_list.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_list.obj \
		src/core/ngx_list.c


build/src/core/ngx_hash.obj:	$(CORE_DEPS) \
	src/core/ngx_hash.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_hash.obj \
		src/core/ngx_hash.c


build/src/core/ngx_buf.obj:	$(CORE_DEPS) \
	src/core/ngx_buf.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_buf.obj \
		src/core/ngx_buf.c


build/src/core/ngx_queue.obj:	$(CORE_DEPS) \
	src/core/ngx_queue.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_queue.obj \
		src/core/ngx_queue.c


build/src/core/ngx_output_chain.obj:	$(CORE_DEPS) \
	src/core/ngx_output_chain.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_output_chain.obj \
		src/core/ngx_output_chain.c


build/src/core/ngx_string.obj:	$(CORE_DEPS) \
	src/core/ngx_string.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_string.obj \
		src/core/ngx_string.c


build/src/core/ngx_parse.obj:	$(CORE_DEPS) \
	src/core/ngx_parse.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_parse.obj \
		src/core/ngx_parse.c


build/src/core/ngx_parse_time.obj:	$(CORE_DEPS) \
	src/core/ngx_parse_time.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_parse_time.obj \
		src/core/ngx_parse_time.c


build/src/core/ngx_inet.obj:	$(CORE_DEPS) \
	src/core/ngx_inet.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_inet.obj \
		src/core/ngx_inet.c


build/src/core/ngx_file.obj:	$(CORE_DEPS) \
	src/core/ngx_file.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_file.obj \
		src/core/ngx_file.c


build/src/core/ngx_crc32.obj:	$(CORE_DEPS) \
	src/core/ngx_crc32.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_crc32.obj \
		src/core/ngx_crc32.c


build/src/core/ngx_murmurhash.obj:	$(CORE_DEPS) \
	src/core/ngx_murmurhash.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_murmurhash.obj \
		src/core/ngx_murmurhash.c


build/src/core/ngx_md5.obj:	$(CORE_DEPS) \
	src/core/ngx_md5.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_md5.obj \
		src/core/ngx_md5.c


build/src/core/ngx_sha1.obj:	$(CORE_DEPS) \
	src/core/ngx_sha1.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_sha1.obj \
		src/core/ngx_sha1.c


build/src/core/ngx_rbtree.obj:	$(CORE_DEPS) \
	src/core/ngx_rbtree.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_rbtree.obj \
		src/core/ngx_rbtree.c


build/src/core/ngx_radix_tree.obj:	$(CORE_DEPS) \
	src/core/ngx_radix_tree.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_radix_tree.obj \
		src/core/ngx_radix_tree.c


build/src/core/ngx_slab.obj:	$(CORE_DEPS) \
	src/core/ngx_slab.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_slab.obj \
		src/core/ngx_slab.c


build/src/core/ngx_times.obj:	$(CORE_DEPS) \
	src/core/ngx_times.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_times.obj \
		src/core/ngx_times.c


build/src/core/ngx_shmtx.obj:	$(CORE_DEPS) \
	src/core/ngx_shmtx.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_shmtx.obj \
		src/core/ngx_shmtx.c


build/src/core/ngx_connection.obj:	$(CORE_DEPS) \
	src/core/ngx_connection.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_connection.obj \
		src/core/ngx_connection.c


build/src/core/ngx_cycle.obj:	$(CORE_DEPS) \
	src/core/ngx_cycle.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_cycle.obj \
		src/core/ngx_cycle.c


build/src/core/ngx_spinlock.obj:	$(CORE_DEPS) \
	src/core/ngx_spinlock.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_spinlock.obj \
		src/core/ngx_spinlock.c


build/src/core/ngx_rwlock.obj:	$(CORE_DEPS) \
	src/core/ngx_rwlock.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_rwlock.obj \
		src/core/ngx_rwlock.c


build/src/core/ngx_cpuinfo.obj:	$(CORE_DEPS) \
	src/core/ngx_cpuinfo.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_cpuinfo.obj \
		src/core/ngx_cpuinfo.c


build/src/core/ngx_conf_file.obj:	$(CORE_DEPS) \
	src/core/ngx_conf_file.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_conf_file.obj \
		src/core/ngx_conf_file.c


build/src/core/ngx_module.obj:	$(CORE_DEPS) \
	src/core/ngx_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_module.obj \
		src/core/ngx_module.c


build/src/core/ngx_resolver.obj:	$(CORE_DEPS) \
	src/core/ngx_resolver.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_resolver.obj \
		src/core/ngx_resolver.c


build/src/core/ngx_open_file_cache.obj:	$(CORE_DEPS) \
	src/core/ngx_open_file_cache.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_open_file_cache.obj \
		src/core/ngx_open_file_cache.c


build/src/core/ngx_crypt.obj:	$(CORE_DEPS) \
	src/core/ngx_crypt.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_crypt.obj \
		src/core/ngx_crypt.c


build/src/core/ngx_proxy_protocol.obj:	$(CORE_DEPS) \
	src/core/ngx_proxy_protocol.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_proxy_protocol.obj \
		src/core/ngx_proxy_protocol.c


build/src/core/ngx_syslog.obj:	$(CORE_DEPS) \
	src/core/ngx_syslog.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_syslog.obj \
		src/core/ngx_syslog.c


build/src/event/ngx_event.obj:	$(CORE_DEPS) \
	src/event/ngx_event.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event.obj \
		src/event/ngx_event.c


build/src/event/ngx_event_timer.obj:	$(CORE_DEPS) \
	src/event/ngx_event_timer.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_timer.obj \
		src/event/ngx_event_timer.c


build/src/event/ngx_event_posted.obj:	$(CORE_DEPS) \
	src/event/ngx_event_posted.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_posted.obj \
		src/event/ngx_event_posted.c


build/src/event/ngx_event_accept.obj:	$(CORE_DEPS) \
	src/event/ngx_event_accept.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_accept.obj \
		src/event/ngx_event_accept.c


build/src/event/ngx_event_connect.obj:	$(CORE_DEPS) \
	src/event/ngx_event_connect.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_connect.obj \
		src/event/ngx_event_connect.c


build/src/event/ngx_event_pipe.obj:	$(CORE_DEPS) \
	src/event/ngx_event_pipe.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_pipe.obj \
		src/event/ngx_event_pipe.c


build/src/os/win32/ngx_errno.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_errno.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_errno.obj \
		src/os/win32/ngx_errno.c


build/src/os/win32/ngx_alloc.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_alloc.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_alloc.obj \
		src/os/win32/ngx_alloc.c


build/src/os/win32/ngx_files.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_files.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_files.obj \
		src/os/win32/ngx_files.c


build/src/os/win32/ngx_shmem.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_shmem.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_shmem.obj \
		src/os/win32/ngx_shmem.c


build/src/os/win32/ngx_time.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_time.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_time.obj \
		src/os/win32/ngx_time.c


build/src/os/win32/ngx_process.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_process.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_process.obj \
		src/os/win32/ngx_process.c


build/src/os/win32/ngx_thread.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_thread.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_thread.obj \
		src/os/win32/ngx_thread.c


build/src/os/win32/ngx_socket.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_socket.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_socket.obj \
		src/os/win32/ngx_socket.c


build/src/os/win32/ngx_wsarecv.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsarecv.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_wsarecv.obj \
		src/os/win32/ngx_wsarecv.c


build/src/os/win32/ngx_wsarecv_chain.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsarecv_chain.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_wsarecv_chain.obj \
		src/os/win32/ngx_wsarecv_chain.c


build/src/os/win32/ngx_udp_wsarecv.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_udp_wsarecv.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_udp_wsarecv.obj \
		src/os/win32/ngx_udp_wsarecv.c


build/src/os/win32/ngx_wsasend.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsasend.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_wsasend.obj \
		src/os/win32/ngx_wsasend.c


build/src/os/win32/ngx_wsasend_chain.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsasend_chain.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_wsasend_chain.obj \
		src/os/win32/ngx_wsasend_chain.c


build/src/os/win32/ngx_win32_init.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_win32_init.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_win32_init.obj \
		src/os/win32/ngx_win32_init.c


build/src/os/win32/ngx_user.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_user.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_user.obj \
		src/os/win32/ngx_user.c


build/src/os/win32/ngx_dlopen.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_dlopen.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_dlopen.obj \
		src/os/win32/ngx_dlopen.c


build/src/os/win32/ngx_event_log.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_event_log.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_event_log.obj \
		src/os/win32/ngx_event_log.c


build/src/os/win32/ngx_process_cycle.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_process_cycle.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/os/win32/ngx_process_cycle.obj \
		src/os/win32/ngx_process_cycle.c


build/src/event/ngx_event_acceptex.obj:	$(CORE_DEPS) \
	src/event/ngx_event_acceptex.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_acceptex.obj \
		src/event/ngx_event_acceptex.c


build/src/event/modules/ngx_iocp_module.obj:	$(CORE_DEPS) \
	src/event/modules/ngx_iocp_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/modules/ngx_iocp_module.obj \
		src/event/modules/ngx_iocp_module.c


build/src/event/modules/ngx_win32_select_module.obj:	$(CORE_DEPS) \
	src/event/modules/ngx_win32_select_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/modules/ngx_win32_select_module.obj \
		src/event/modules/ngx_win32_select_module.c


build/src/event/ngx_event_openssl.obj:	$(CORE_DEPS) \
	src/event/ngx_event_openssl.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_openssl.obj \
		src/event/ngx_event_openssl.c


build/src/event/ngx_event_openssl_stapling.obj:	$(CORE_DEPS) \
	src/event/ngx_event_openssl_stapling.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/event/ngx_event_openssl_stapling.obj \
		src/event/ngx_event_openssl_stapling.c


build/src/core/ngx_regex.obj:	$(CORE_DEPS) \
	src/core/ngx_regex.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/core/ngx_regex.obj \
		src/core/ngx_regex.c


build/src/http/ngx_http.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http.obj \
		src/http/ngx_http.c


build/src/http/ngx_http_core_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_core_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_core_module.obj \
		src/http/ngx_http_core_module.c


build/src/http/ngx_http_special_response.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_special_response.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_special_response.obj \
		src/http/ngx_http_special_response.c


build/src/http/ngx_http_request.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_request.obj \
		src/http/ngx_http_request.c


build/src/http/ngx_http_parse.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_parse.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_parse.obj \
		src/http/ngx_http_parse.c


build/src/http/modules/ngx_http_log_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_log_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_log_module.obj \
		src/http/modules/ngx_http_log_module.c


build/src/http/ngx_http_request_body.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request_body.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_request_body.obj \
		src/http/ngx_http_request_body.c


build/src/http/ngx_http_variables.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_variables.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_variables.obj \
		src/http/ngx_http_variables.c


build/src/http/ngx_http_script.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_script.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_script.obj \
		src/http/ngx_http_script.c


build/src/http/ngx_http_upstream.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_upstream.obj \
		src/http/ngx_http_upstream.c


build/src/http/ngx_http_upstream_round_robin.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream_round_robin.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_upstream_round_robin.obj \
		src/http/ngx_http_upstream_round_robin.c


build/src/http/ngx_http_file_cache.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_file_cache.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_file_cache.obj \
		src/http/ngx_http_file_cache.c


build/src/http/ngx_http_write_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_write_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_write_filter_module.obj \
		src/http/ngx_http_write_filter_module.c


build/src/http/ngx_http_header_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_header_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_header_filter_module.obj \
		src/http/ngx_http_header_filter_module.c


build/src/http/modules/ngx_http_chunked_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_chunked_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_chunked_filter_module.obj \
		src/http/modules/ngx_http_chunked_filter_module.c


build/src/http/modules/ngx_http_range_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_range_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_range_filter_module.obj \
		src/http/modules/ngx_http_range_filter_module.c


build/src/http/modules/ngx_http_gzip_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_gzip_filter_module.obj \
		src/http/modules/ngx_http_gzip_filter_module.c


build/src/http/ngx_http_postpone_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_postpone_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_postpone_filter_module.obj \
		src/http/ngx_http_postpone_filter_module.c


build/src/http/modules/ngx_http_ssi_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssi_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_ssi_filter_module.obj \
		src/http/modules/ngx_http_ssi_filter_module.c


build/src/http/modules/ngx_http_charset_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_charset_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_charset_filter_module.obj \
		src/http/modules/ngx_http_charset_filter_module.c


build/src/http/modules/ngx_http_sub_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_sub_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_sub_filter_module.obj \
		src/http/modules/ngx_http_sub_filter_module.c


build/src/http/modules/ngx_http_userid_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_userid_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_userid_filter_module.obj \
		src/http/modules/ngx_http_userid_filter_module.c


build/src/http/modules/ngx_http_headers_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_headers_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_headers_filter_module.obj \
		src/http/modules/ngx_http_headers_filter_module.c


build/src/http/ngx_http_copy_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_copy_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/ngx_http_copy_filter_module.obj \
		src/http/ngx_http_copy_filter_module.c


build/src/http/modules/ngx_http_not_modified_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_not_modified_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_not_modified_filter_module.obj \
		src/http/modules/ngx_http_not_modified_filter_module.c


build/src/http/modules/ngx_http_static_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_static_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_static_module.obj \
		src/http/modules/ngx_http_static_module.c


build/src/http/modules/ngx_http_autoindex_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_autoindex_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_autoindex_module.obj \
		src/http/modules/ngx_http_autoindex_module.c


build/src/http/modules/ngx_http_index_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_index_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_index_module.obj \
		src/http/modules/ngx_http_index_module.c


build/src/http/modules/ngx_http_auth_basic_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_auth_basic_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_auth_basic_module.obj \
		src/http/modules/ngx_http_auth_basic_module.c


build/src/http/modules/ngx_http_access_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_access_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_access_module.obj \
		src/http/modules/ngx_http_access_module.c


build/src/http/modules/ngx_http_limit_conn_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_conn_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_limit_conn_module.obj \
		src/http/modules/ngx_http_limit_conn_module.c


build/src/http/modules/ngx_http_limit_req_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_req_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_limit_req_module.obj \
		src/http/modules/ngx_http_limit_req_module.c


build/src/http/modules/ngx_http_geo_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_geo_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_geo_module.obj \
		src/http/modules/ngx_http_geo_module.c


build/src/http/modules/ngx_http_map_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_map_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_map_module.obj \
		src/http/modules/ngx_http_map_module.c


build/src/http/modules/ngx_http_split_clients_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_split_clients_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_split_clients_module.obj \
		src/http/modules/ngx_http_split_clients_module.c


build/src/http/modules/ngx_http_referer_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_referer_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_referer_module.obj \
		src/http/modules/ngx_http_referer_module.c


build/src/http/modules/ngx_http_rewrite_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_rewrite_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_rewrite_module.obj \
		src/http/modules/ngx_http_rewrite_module.c


build/src/http/modules/ngx_http_ssl_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssl_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_ssl_module.obj \
		src/http/modules/ngx_http_ssl_module.c


build/src/http/modules/ngx_http_proxy_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_proxy_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_proxy_module.obj \
		src/http/modules/ngx_http_proxy_module.c


build/src/http/modules/ngx_http_fastcgi_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_fastcgi_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_fastcgi_module.obj \
		src/http/modules/ngx_http_fastcgi_module.c


build/src/http/modules/ngx_http_uwsgi_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_uwsgi_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_uwsgi_module.obj \
		src/http/modules/ngx_http_uwsgi_module.c


build/src/http/modules/ngx_http_scgi_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_scgi_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_scgi_module.obj \
		src/http/modules/ngx_http_scgi_module.c


build/src/http/modules/ngx_http_memcached_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_memcached_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_memcached_module.obj \
		src/http/modules/ngx_http_memcached_module.c


build/src/http/modules/ngx_http_empty_gif_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_empty_gif_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_empty_gif_module.obj \
		src/http/modules/ngx_http_empty_gif_module.c


build/src/http/modules/ngx_http_browser_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_browser_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_browser_module.obj \
		src/http/modules/ngx_http_browser_module.c


build/src/http/modules/ngx_http_upstream_hash_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_hash_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_upstream_hash_module.obj \
		src/http/modules/ngx_http_upstream_hash_module.c


build/src/http/modules/ngx_http_upstream_ip_hash_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_ip_hash_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_upstream_ip_hash_module.obj \
		src/http/modules/ngx_http_upstream_ip_hash_module.c


build/src/http/modules/ngx_http_upstream_least_conn_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_upstream_least_conn_module.obj \
		src/http/modules/ngx_http_upstream_least_conn_module.c


build/src/http/modules/ngx_http_upstream_keepalive_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_keepalive_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_upstream_keepalive_module.obj \
		src/http/modules/ngx_http_upstream_keepalive_module.c


build/src/http/modules/ngx_http_upstream_zone_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_zone_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/src/http/modules/ngx_http_upstream_zone_module.obj \
		src/http/modules/ngx_http_upstream_zone_module.c


build/addon/nginx-rtmp-module/ngx_rtmp.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp.obj \
		../nginx-rtmp-module/ngx_rtmp.c


build/addon/nginx-rtmp-module/ngx_rtmp_init.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_init.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_init.obj \
		../nginx-rtmp-module/ngx_rtmp_init.c


build/addon/nginx-rtmp-module/ngx_rtmp_handshake.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_handshake.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_handshake.obj \
		../nginx-rtmp-module/ngx_rtmp_handshake.c


build/addon/nginx-rtmp-module/ngx_rtmp_handler.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_handler.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_handler.obj \
		../nginx-rtmp-module/ngx_rtmp_handler.c


build/addon/nginx-rtmp-module/ngx_rtmp_amf.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_amf.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_amf.obj \
		../nginx-rtmp-module/ngx_rtmp_amf.c


build/addon/nginx-rtmp-module/ngx_rtmp_send.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_send.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_send.obj \
		../nginx-rtmp-module/ngx_rtmp_send.c


build/addon/nginx-rtmp-module/ngx_rtmp_shared.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_shared.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_shared.obj \
		../nginx-rtmp-module/ngx_rtmp_shared.c


build/addon/nginx-rtmp-module/ngx_rtmp_eval.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_eval.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_eval.obj \
		../nginx-rtmp-module/ngx_rtmp_eval.c


build/addon/nginx-rtmp-module/ngx_rtmp_receive.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_receive.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_receive.obj \
		../nginx-rtmp-module/ngx_rtmp_receive.c


build/addon/nginx-rtmp-module/ngx_rtmp_core_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_core_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_core_module.obj \
		../nginx-rtmp-module/ngx_rtmp_core_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_cmd_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_cmd_module.obj \
		../nginx-rtmp-module/ngx_rtmp_cmd_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_codec_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_codec_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_codec_module.obj \
		../nginx-rtmp-module/ngx_rtmp_codec_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_access_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_access_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_access_module.obj \
		../nginx-rtmp-module/ngx_rtmp_access_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_record_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_record_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_record_module.obj \
		../nginx-rtmp-module/ngx_rtmp_record_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_live_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_live_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_live_module.obj \
		../nginx-rtmp-module/ngx_rtmp_live_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_play_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_play_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_play_module.obj \
		../nginx-rtmp-module/ngx_rtmp_play_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_flv_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_flv_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_flv_module.obj \
		../nginx-rtmp-module/ngx_rtmp_flv_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_mp4_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_mp4_module.obj \
		../nginx-rtmp-module/ngx_rtmp_mp4_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_netcall_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_netcall_module.obj \
		../nginx-rtmp-module/ngx_rtmp_netcall_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_relay_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_relay_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_relay_module.obj \
		../nginx-rtmp-module/ngx_rtmp_relay_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_bandwidth.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_bandwidth.obj \
		../nginx-rtmp-module/ngx_rtmp_bandwidth.c


build/addon/nginx-rtmp-module/ngx_rtmp_exec_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_exec_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_exec_module.obj \
		../nginx-rtmp-module/ngx_rtmp_exec_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_auto_push_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_auto_push_module.obj \
		../nginx-rtmp-module/ngx_rtmp_auto_push_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_notify_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_notify_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_notify_module.obj \
		../nginx-rtmp-module/ngx_rtmp_notify_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_log_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_log_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_log_module.obj \
		../nginx-rtmp-module/ngx_rtmp_log_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_limit_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_limit_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_limit_module.obj \
		../nginx-rtmp-module/ngx_rtmp_limit_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_bitop.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_bitop.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_bitop.obj \
		../nginx-rtmp-module/ngx_rtmp_bitop.c


build/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_proxy_protocol.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_proxy_protocol.obj \
		../nginx-rtmp-module/ngx_rtmp_proxy_protocol.c


build/addon/hls/ngx_rtmp_hls_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/hls/ngx_rtmp_hls_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/hls/ngx_rtmp_hls_module.obj \
		../nginx-rtmp-module/hls/ngx_rtmp_hls_module.c


build/addon/dash/ngx_rtmp_dash_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/dash/ngx_rtmp_dash_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/dash/ngx_rtmp_dash_module.obj \
		../nginx-rtmp-module/dash/ngx_rtmp_dash_module.c


build/addon/hls/ngx_rtmp_mpegts.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/hls/ngx_rtmp_mpegts.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/hls/ngx_rtmp_mpegts.obj \
		../nginx-rtmp-module/hls/ngx_rtmp_mpegts.c


build/addon/dash/ngx_rtmp_mp4.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/dash/ngx_rtmp_mp4.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/dash/ngx_rtmp_mp4.obj \
		../nginx-rtmp-module/dash/ngx_rtmp_mp4.c


build/addon/nginx-rtmp-module/ngx_rtmp_stat_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_stat_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_stat_module.obj \
		../nginx-rtmp-module/ngx_rtmp_stat_module.c


build/addon/nginx-rtmp-module/ngx_rtmp_control_module.obj:	$(ADDON_DEPS) \
	../nginx-rtmp-module/ngx_rtmp_control_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild/ngx_config.pch $(ALL_INCS) \
		-Fobuild/addon/nginx-rtmp-module/ngx_rtmp_control_module.obj \
		../nginx-rtmp-module/ngx_rtmp_control_module.c


build/nginx.res:	 src/os/win32/nginx.ico
	rc -fobuild/nginx.res $(CORE_INCS) src/os/win32/nginx.rc


build/ngx_config.pch:	src/core/ngx_config.h src/os/win32/ngx_win32_config.h build/ngx_auto_config.h
	$(CC) $(CFLAGS) -Ycngx_config.h -Fpbuild/ngx_config.pch -c $(ALL_INCS) -Fobuild/ngx_pch.obj build/ngx_pch.c


../pcre/pcre.lib:	../pcre/pcre.h build/Makefile
	$(MAKE) -f auto/lib/pcre/makefile.msvc PCRE="../pcre" CPU_OPT="" LIBC=-MT

../pcre/pcre.h:
	$(MAKE) -f auto/lib/pcre/makefile.msvc PCRE="../pcre" pcre.h


#../openssl/openssl/include/openssl/ssl.h:	build/Makefile
#	$(MAKE) -f auto/lib/openssl/makefile.msvc					OPENSSL="../openssl" OPENSSL_OPT=""


../zlib/zlib.lib:	build/Makefile
	$(MAKE) -f auto/lib/zlib/makefile.msvc CPU_OPT="" LIBC=-MT ZLIB="../zlib"


#manpage:	build/nginx.8

#build/nginx.8:	docs/man/nginx.8 build/ngx_auto_config.h
#	sed -e "s|%%PREFIX%%||" \
#		-e "s|%%PID_PATH%%|/logs/nginx.pid|" \
#		-e "s|%%CONF_PATH%%|/conf/nginx.conf|" \
#		-e "s|%%ERROR_LOG_PATH%%|/logs/error.log|" \
#		< docs/man/nginx.8 > $@

install:	build 
	test -d '$(DESTDIR)' || mkdir -p '$(DESTDIR)'

	test -d '$(DESTDIR)/' \
		|| mkdir -p '$(DESTDIR)/'
	test ! -f '$(DESTDIR)/nginx.exe' \
		|| mv '$(DESTDIR)/nginx.exe' \
			'$(DESTDIR)/nginx.exe.old'
	cp build/nginx '$(DESTDIR)/nginx.exe'

	test -d '$(DESTDIR)/conf' \
		|| mkdir -p '$(DESTDIR)/conf'

	cp conf/koi-win '$(DESTDIR)/conf'
	cp conf/koi-utf '$(DESTDIR)/conf'
	cp conf/win-utf '$(DESTDIR)/conf'

	test -f '$(DESTDIR)/conf/mime.types' \
		|| cp conf/mime.types '$(DESTDIR)/conf'
	cp conf/mime.types '$(DESTDIR)/conf/mime.types.default'

	test -f '$(DESTDIR)/conf/fastcgi_params' \
		|| cp conf/fastcgi_params '$(DESTDIR)/conf'
	cp conf/fastcgi_params \
		'$(DESTDIR)/conf/fastcgi_params.default'

	test -f '$(DESTDIR)/conf/fastcgi.conf' \
		|| cp conf/fastcgi.conf '$(DESTDIR)/conf'
	cp conf/fastcgi.conf '$(DESTDIR)/conf/fastcgi.conf.default'

	test -f '$(DESTDIR)/conf/uwsgi_params' \
		|| cp conf/uwsgi_params '$(DESTDIR)/conf'
	cp conf/uwsgi_params \
		'$(DESTDIR)/conf/uwsgi_params.default'

	test -f '$(DESTDIR)/conf/scgi_params' \
		|| cp conf/scgi_params '$(DESTDIR)/conf'
	cp conf/scgi_params \
		'$(DESTDIR)/conf/scgi_params.default'

	test -f '$(DESTDIR)/conf/nginx.conf' \
		|| cp conf/nginx.conf '$(DESTDIR)/conf/nginx.conf'
	cp conf/nginx.conf '$(DESTDIR)/conf/nginx.conf.default'

	test -d '$(DESTDIR)/logs' \
		|| mkdir -p '$(DESTDIR)/logs'

	test -d '$(DESTDIR)/logs' \
		|| mkdir -p '$(DESTDIR)/logs'

	test -d '$(DESTDIR)/html' \
		|| cp -R docs/html '$(DESTDIR)'

	test -d '$(DESTDIR)/logs' \
		|| mkdir -p '$(DESTDIR)/logs'
