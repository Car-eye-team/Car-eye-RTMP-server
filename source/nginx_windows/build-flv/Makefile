
CC =	cl
CFLAGS =  -O2  -W3 -WX -nologo -MT -Zi -DFD_SETSIZE=1024 -DNO_SYS_TYPES_H
CPP =	
LINK =	$(CC)


ALL_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/win32 \
	-I ../../../car-eye-http-flv-module \
	-I ../pcre \
	-I ./include \
	-I ../zlib \
	-I build-flv \
	-I src/http \
	-I src/http/modules \
	-I ../../../car-eye-http-flv-module


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
	build-flv/ngx_auto_config.h \
	build-flv/ngx_config.pch


CORE_INCS = -I src/core \
	-I src/event \
	-I src/event/modules \
	-I src/os/win32 \
	-I ../../../car-eye-http-flv-module \
	-I ../pcre \
	-I ./include \
	-I ../zlib \
	-I build-flv


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
	-I src/http/modules \
	-I ../../../car-eye-http-flv-module


ADDON_DEPS = $(CORE_DEPS)                                                                       ../../../car-eye-http-flv-module/ngx_rtmp_amf.h                                   ../../../car-eye-http-flv-module/ngx_rtmp_bandwidth.h                             ../../../car-eye-http-flv-module/ngx_rtmp_cmd_module.h                            ../../../car-eye-http-flv-module/ngx_rtmp_codec_module.h                          ../../../car-eye-http-flv-module/ngx_rtmp_eval.h                                  ../../../car-eye-http-flv-module/ngx_rtmp.h                                       ../../../car-eye-http-flv-module/ngx_rtmp_version.h                               ../../../car-eye-http-flv-module/ngx_rtmp_live_module.h                           ../../../car-eye-http-flv-module/ngx_rtmp_netcall_module.h                        ../../../car-eye-http-flv-module/ngx_rtmp_play_module.h                           ../../../car-eye-http-flv-module/ngx_rtmp_record_module.h                         ../../../car-eye-http-flv-module/ngx_rtmp_gop_cache_module.h                      ../../../car-eye-http-flv-module/ngx_rtmp_relay_module.h                          ../../../car-eye-http-flv-module/ngx_rtmp_streams.h                               ../../../car-eye-http-flv-module/ngx_rtmp_bitop.h                                 ../../../car-eye-http-flv-module/ngx_rtmp_proxy_protocol.h                        ../../../car-eye-http-flv-module/ngx_rtmp_variables.h                             ../../../car-eye-http-flv-module/hls/ngx_rtmp_mpegts.h                            ../../../car-eye-http-flv-module/dash/ngx_rtmp_mp4.h                                                                                               ../../../car-eye-http-flv-module/ngx_http_flv_live_module.h                        $(HTTP_DEPS)


build:	binary modules #manpage

binary:	build-flv/nginx.exe

build-flv/nginx.exe:	build-flv/src/core/nginx.obj \
	build-flv/src/core/ngx_log.obj \
	build-flv/src/core/ngx_palloc.obj \
	build-flv/src/core/ngx_array.obj \
	build-flv/src/core/ngx_list.obj \
	build-flv/src/core/ngx_hash.obj \
	build-flv/src/core/ngx_buf.obj \
	build-flv/src/core/ngx_queue.obj \
	build-flv/src/core/ngx_output_chain.obj \
	build-flv/src/core/ngx_string.obj \
	build-flv/src/core/ngx_parse.obj \
	build-flv/src/core/ngx_parse_time.obj \
	build-flv/src/core/ngx_inet.obj \
	build-flv/src/core/ngx_file.obj \
	build-flv/src/core/ngx_crc32.obj \
	build-flv/src/core/ngx_murmurhash.obj \
	build-flv/src/core/ngx_md5.obj \
	build-flv/src/core/ngx_sha1.obj \
	build-flv/src/core/ngx_rbtree.obj \
	build-flv/src/core/ngx_radix_tree.obj \
	build-flv/src/core/ngx_slab.obj \
	build-flv/src/core/ngx_times.obj \
	build-flv/src/core/ngx_shmtx.obj \
	build-flv/src/core/ngx_connection.obj \
	build-flv/src/core/ngx_cycle.obj \
	build-flv/src/core/ngx_spinlock.obj \
	build-flv/src/core/ngx_rwlock.obj \
	build-flv/src/core/ngx_cpuinfo.obj \
	build-flv/src/core/ngx_conf_file.obj \
	build-flv/src/core/ngx_module.obj \
	build-flv/src/core/ngx_resolver.obj \
	build-flv/src/core/ngx_open_file_cache.obj \
	build-flv/src/core/ngx_crypt.obj \
	build-flv/src/core/ngx_proxy_protocol.obj \
	build-flv/src/core/ngx_syslog.obj \
	build-flv/src/event/ngx_event.obj \
	build-flv/src/event/ngx_event_timer.obj \
	build-flv/src/event/ngx_event_posted.obj \
	build-flv/src/event/ngx_event_accept.obj \
	build-flv/src/event/ngx_event_connect.obj \
	build-flv/src/event/ngx_event_pipe.obj \
	build-flv/src/os/win32/ngx_errno.obj \
	build-flv/src/os/win32/ngx_alloc.obj \
	build-flv/src/os/win32/ngx_files.obj \
	build-flv/src/os/win32/ngx_shmem.obj \
	build-flv/src/os/win32/ngx_time.obj \
	build-flv/src/os/win32/ngx_process.obj \
	build-flv/src/os/win32/ngx_thread.obj \
	build-flv/src/os/win32/ngx_socket.obj \
	build-flv/src/os/win32/ngx_wsarecv.obj \
	build-flv/src/os/win32/ngx_wsarecv_chain.obj \
	build-flv/src/os/win32/ngx_udp_wsarecv.obj \
	build-flv/src/os/win32/ngx_wsasend.obj \
	build-flv/src/os/win32/ngx_wsasend_chain.obj \
	build-flv/src/os/win32/ngx_win32_init.obj \
	build-flv/src/os/win32/ngx_user.obj \
	build-flv/src/os/win32/ngx_dlopen.obj \
	build-flv/src/os/win32/ngx_event_log.obj \
	build-flv/src/os/win32/ngx_process_cycle.obj \
	build-flv/src/event/ngx_event_acceptex.obj \
	build-flv/src/event/modules/ngx_iocp_module.obj \
	build-flv/src/event/modules/ngx_win32_select_module.obj \
	build-flv/src/event/ngx_event_openssl.obj \
	build-flv/src/event/ngx_event_openssl_stapling.obj \
	build-flv/src/core/ngx_regex.obj \
	build-flv/src/http/ngx_http.obj \
	build-flv/src/http/ngx_http_core_module.obj \
	build-flv/src/http/ngx_http_special_response.obj \
	build-flv/src/http/ngx_http_request.obj \
	build-flv/src/http/ngx_http_parse.obj \
	build-flv/src/http/modules/ngx_http_log_module.obj \
	build-flv/src/http/ngx_http_request_body.obj \
	build-flv/src/http/ngx_http_variables.obj \
	build-flv/src/http/ngx_http_script.obj \
	build-flv/src/http/ngx_http_upstream.obj \
	build-flv/src/http/ngx_http_upstream_round_robin.obj \
	build-flv/src/http/ngx_http_file_cache.obj \
	build-flv/src/http/ngx_http_write_filter_module.obj \
	build-flv/src/http/ngx_http_header_filter_module.obj \
	build-flv/src/http/modules/ngx_http_chunked_filter_module.obj \
	build-flv/src/http/modules/ngx_http_range_filter_module.obj \
	build-flv/src/http/modules/ngx_http_gzip_filter_module.obj \
	build-flv/src/http/ngx_http_postpone_filter_module.obj \
	build-flv/src/http/modules/ngx_http_ssi_filter_module.obj \
	build-flv/src/http/modules/ngx_http_charset_filter_module.obj \
	build-flv/src/http/modules/ngx_http_sub_filter_module.obj \
	build-flv/src/http/modules/ngx_http_userid_filter_module.obj \
	build-flv/src/http/modules/ngx_http_headers_filter_module.obj \
	build-flv/src/http/ngx_http_copy_filter_module.obj \
	build-flv/src/http/modules/ngx_http_not_modified_filter_module.obj \
	build-flv/src/http/modules/ngx_http_static_module.obj \
	build-flv/src/http/modules/ngx_http_autoindex_module.obj \
	build-flv/src/http/modules/ngx_http_index_module.obj \
	build-flv/src/http/modules/ngx_http_auth_basic_module.obj \
	build-flv/src/http/modules/ngx_http_access_module.obj \
	build-flv/src/http/modules/ngx_http_limit_conn_module.obj \
	build-flv/src/http/modules/ngx_http_limit_req_module.obj \
	build-flv/src/http/modules/ngx_http_geo_module.obj \
	build-flv/src/http/modules/ngx_http_map_module.obj \
	build-flv/src/http/modules/ngx_http_split_clients_module.obj \
	build-flv/src/http/modules/ngx_http_referer_module.obj \
	build-flv/src/http/modules/ngx_http_rewrite_module.obj \
	build-flv/src/http/modules/ngx_http_ssl_module.obj \
	build-flv/src/http/modules/ngx_http_proxy_module.obj \
	build-flv/src/http/modules/ngx_http_fastcgi_module.obj \
	build-flv/src/http/modules/ngx_http_uwsgi_module.obj \
	build-flv/src/http/modules/ngx_http_scgi_module.obj \
	build-flv/src/http/modules/ngx_http_memcached_module.obj \
	build-flv/src/http/modules/ngx_http_empty_gif_module.obj \
	build-flv/src/http/modules/ngx_http_browser_module.obj \
	build-flv/src/http/modules/ngx_http_upstream_hash_module.obj \
	build-flv/src/http/modules/ngx_http_upstream_ip_hash_module.obj \
	build-flv/src/http/modules/ngx_http_upstream_least_conn_module.obj \
	build-flv/src/http/modules/ngx_http_upstream_keepalive_module.obj \
	build-flv/src/http/modules/ngx_http_upstream_zone_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_init.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_handshake.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_handler.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_amf.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_send.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_shared.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_eval.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_receive.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_core_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_cmd_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_codec_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_access_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_record_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_gop_cache_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_live_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_live_index_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_play_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_mp4_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_netcall_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_relay_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_bandwidth.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_exec_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_auto_push_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_notify_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_log_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_limit_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_bitop.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_proxy_protocol.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_variables.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_parse.obj \
	build-flv/addon/hls/ngx_rtmp_hls_module.obj \
	build-flv/addon/dash/ngx_rtmp_dash_module.obj \
	build-flv/addon/hls/ngx_rtmp_mpegts.obj \
	build-flv/addon/dash/ngx_rtmp_mp4.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_stat_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_control_module.obj \
	build-flv/addon/car-eye-http-flv-module/ngx_http_flv_live_module.obj \
	build-flv/ngx_modules.obj \
	build-flv/nginx.res \
	../pcre/pcre.lib \
	../zlib/zlib.lib
	$(LINK) @<<
	-Febuild-flv/nginx
	build-flv/src/core/nginx.obj 
	build-flv/src/core/ngx_log.obj 
	build-flv/src/core/ngx_palloc.obj 
	build-flv/src/core/ngx_array.obj 
	build-flv/src/core/ngx_list.obj 
	build-flv/src/core/ngx_hash.obj 
	build-flv/src/core/ngx_buf.obj 
	build-flv/src/core/ngx_queue.obj 
	build-flv/src/core/ngx_output_chain.obj 
	build-flv/src/core/ngx_string.obj 
	build-flv/src/core/ngx_parse.obj 
	build-flv/src/core/ngx_parse_time.obj 
	build-flv/src/core/ngx_inet.obj 
	build-flv/src/core/ngx_file.obj 
	build-flv/src/core/ngx_crc32.obj 
	build-flv/src/core/ngx_murmurhash.obj 
	build-flv/src/core/ngx_md5.obj 
	build-flv/src/core/ngx_sha1.obj 
	build-flv/src/core/ngx_rbtree.obj 
	build-flv/src/core/ngx_radix_tree.obj 
	build-flv/src/core/ngx_slab.obj 
	build-flv/src/core/ngx_times.obj 
	build-flv/src/core/ngx_shmtx.obj 
	build-flv/src/core/ngx_connection.obj 
	build-flv/src/core/ngx_cycle.obj 
	build-flv/src/core/ngx_spinlock.obj 
	build-flv/src/core/ngx_rwlock.obj 
	build-flv/src/core/ngx_cpuinfo.obj 
	build-flv/src/core/ngx_conf_file.obj 
	build-flv/src/core/ngx_module.obj 
	build-flv/src/core/ngx_resolver.obj 
	build-flv/src/core/ngx_open_file_cache.obj 
	build-flv/src/core/ngx_crypt.obj 
	build-flv/src/core/ngx_proxy_protocol.obj 
	build-flv/src/core/ngx_syslog.obj 
	build-flv/src/event/ngx_event.obj 
	build-flv/src/event/ngx_event_timer.obj 
	build-flv/src/event/ngx_event_posted.obj 
	build-flv/src/event/ngx_event_accept.obj 
	build-flv/src/event/ngx_event_connect.obj 
	build-flv/src/event/ngx_event_pipe.obj 
	build-flv/src/os/win32/ngx_errno.obj 
	build-flv/src/os/win32/ngx_alloc.obj 
	build-flv/src/os/win32/ngx_files.obj 
	build-flv/src/os/win32/ngx_shmem.obj 
	build-flv/src/os/win32/ngx_time.obj 
	build-flv/src/os/win32/ngx_process.obj 
	build-flv/src/os/win32/ngx_thread.obj 
	build-flv/src/os/win32/ngx_socket.obj 
	build-flv/src/os/win32/ngx_wsarecv.obj 
	build-flv/src/os/win32/ngx_wsarecv_chain.obj 
	build-flv/src/os/win32/ngx_udp_wsarecv.obj 
	build-flv/src/os/win32/ngx_wsasend.obj 
	build-flv/src/os/win32/ngx_wsasend_chain.obj 
	build-flv/src/os/win32/ngx_win32_init.obj 
	build-flv/src/os/win32/ngx_user.obj 
	build-flv/src/os/win32/ngx_dlopen.obj 
	build-flv/src/os/win32/ngx_event_log.obj 
	build-flv/src/os/win32/ngx_process_cycle.obj 
	build-flv/src/event/ngx_event_acceptex.obj 
	build-flv/src/event/modules/ngx_iocp_module.obj 
	build-flv/src/event/modules/ngx_win32_select_module.obj 
	build-flv/src/event/ngx_event_openssl.obj 
	build-flv/src/event/ngx_event_openssl_stapling.obj 
	build-flv/src/core/ngx_regex.obj 
	build-flv/src/http/ngx_http.obj 
	build-flv/src/http/ngx_http_core_module.obj 
	build-flv/src/http/ngx_http_special_response.obj 
	build-flv/src/http/ngx_http_request.obj 
	build-flv/src/http/ngx_http_parse.obj 
	build-flv/src/http/modules/ngx_http_log_module.obj 
	build-flv/src/http/ngx_http_request_body.obj 
	build-flv/src/http/ngx_http_variables.obj 
	build-flv/src/http/ngx_http_script.obj 
	build-flv/src/http/ngx_http_upstream.obj 
	build-flv/src/http/ngx_http_upstream_round_robin.obj 
	build-flv/src/http/ngx_http_file_cache.obj 
	build-flv/src/http/ngx_http_write_filter_module.obj 
	build-flv/src/http/ngx_http_header_filter_module.obj 
	build-flv/src/http/modules/ngx_http_chunked_filter_module.obj 
	build-flv/src/http/modules/ngx_http_range_filter_module.obj 
	build-flv/src/http/modules/ngx_http_gzip_filter_module.obj 
	build-flv/src/http/ngx_http_postpone_filter_module.obj 
	build-flv/src/http/modules/ngx_http_ssi_filter_module.obj 
	build-flv/src/http/modules/ngx_http_charset_filter_module.obj 
	build-flv/src/http/modules/ngx_http_sub_filter_module.obj 
	build-flv/src/http/modules/ngx_http_userid_filter_module.obj 
	build-flv/src/http/modules/ngx_http_headers_filter_module.obj 
	build-flv/src/http/ngx_http_copy_filter_module.obj 
	build-flv/src/http/modules/ngx_http_not_modified_filter_module.obj 
	build-flv/src/http/modules/ngx_http_static_module.obj 
	build-flv/src/http/modules/ngx_http_autoindex_module.obj 
	build-flv/src/http/modules/ngx_http_index_module.obj 
	build-flv/src/http/modules/ngx_http_auth_basic_module.obj 
	build-flv/src/http/modules/ngx_http_access_module.obj 
	build-flv/src/http/modules/ngx_http_limit_conn_module.obj 
	build-flv/src/http/modules/ngx_http_limit_req_module.obj 
	build-flv/src/http/modules/ngx_http_geo_module.obj 
	build-flv/src/http/modules/ngx_http_map_module.obj 
	build-flv/src/http/modules/ngx_http_split_clients_module.obj 
	build-flv/src/http/modules/ngx_http_referer_module.obj 
	build-flv/src/http/modules/ngx_http_rewrite_module.obj 
	build-flv/src/http/modules/ngx_http_ssl_module.obj 
	build-flv/src/http/modules/ngx_http_proxy_module.obj 
	build-flv/src/http/modules/ngx_http_fastcgi_module.obj 
	build-flv/src/http/modules/ngx_http_uwsgi_module.obj 
	build-flv/src/http/modules/ngx_http_scgi_module.obj 
	build-flv/src/http/modules/ngx_http_memcached_module.obj 
	build-flv/src/http/modules/ngx_http_empty_gif_module.obj 
	build-flv/src/http/modules/ngx_http_browser_module.obj 
	build-flv/src/http/modules/ngx_http_upstream_hash_module.obj 
	build-flv/src/http/modules/ngx_http_upstream_ip_hash_module.obj 
	build-flv/src/http/modules/ngx_http_upstream_least_conn_module.obj 
	build-flv/src/http/modules/ngx_http_upstream_keepalive_module.obj 
	build-flv/src/http/modules/ngx_http_upstream_zone_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_init.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_handshake.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_handler.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_amf.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_send.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_shared.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_eval.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_receive.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_core_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_cmd_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_codec_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_access_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_record_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_gop_cache_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_live_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_live_index_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_play_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_mp4_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_netcall_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_relay_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_bandwidth.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_exec_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_auto_push_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_notify_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_log_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_limit_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_bitop.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_proxy_protocol.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_variables.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_parse.obj 
	build-flv/addon/hls/ngx_rtmp_hls_module.obj 
	build-flv/addon/dash/ngx_rtmp_dash_module.obj 
	build-flv/addon/hls/ngx_rtmp_mpegts.obj 
	build-flv/addon/dash/ngx_rtmp_mp4.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_stat_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_rtmp_control_module.obj 
	build-flv/addon/car-eye-http-flv-module/ngx_http_flv_live_module.obj 
	build-flv/ngx_modules.obj 
	kernel32.lib user32.lib advapi32.lib ws2_32.lib legacy_stdio_definitions.lib ../pcre/pcre.lib ./libs/openssl/libcrypto32MT.lib ./libs/openssl/libssl32MT.lib gdi32.lib crypt32.lib ../zlib/zlib.lib 
	build-flv/nginx.res -link -verbose:lib -debug build-flv/ngx_pch.obj
	
<<

modules:

build-flv/ngx_modules.obj:	$(CORE_DEPS) \
	build-flv/ngx_modules.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/ngx_modules.obj \
		build-flv/ngx_modules.c


build-flv/src/core/nginx.obj:	$(CORE_DEPS) \
	src/core/nginx.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/nginx.obj \
		src/core/nginx.c


build-flv/src/core/ngx_log.obj:	$(CORE_DEPS) \
	src/core/ngx_log.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_log.obj \
		src/core/ngx_log.c


build-flv/src/core/ngx_palloc.obj:	$(CORE_DEPS) \
	src/core/ngx_palloc.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_palloc.obj \
		src/core/ngx_palloc.c


build-flv/src/core/ngx_array.obj:	$(CORE_DEPS) \
	src/core/ngx_array.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_array.obj \
		src/core/ngx_array.c


build-flv/src/core/ngx_list.obj:	$(CORE_DEPS) \
	src/core/ngx_list.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_list.obj \
		src/core/ngx_list.c


build-flv/src/core/ngx_hash.obj:	$(CORE_DEPS) \
	src/core/ngx_hash.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_hash.obj \
		src/core/ngx_hash.c


build-flv/src/core/ngx_buf.obj:	$(CORE_DEPS) \
	src/core/ngx_buf.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_buf.obj \
		src/core/ngx_buf.c


build-flv/src/core/ngx_queue.obj:	$(CORE_DEPS) \
	src/core/ngx_queue.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_queue.obj \
		src/core/ngx_queue.c


build-flv/src/core/ngx_output_chain.obj:	$(CORE_DEPS) \
	src/core/ngx_output_chain.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_output_chain.obj \
		src/core/ngx_output_chain.c


build-flv/src/core/ngx_string.obj:	$(CORE_DEPS) \
	src/core/ngx_string.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_string.obj \
		src/core/ngx_string.c


build-flv/src/core/ngx_parse.obj:	$(CORE_DEPS) \
	src/core/ngx_parse.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_parse.obj \
		src/core/ngx_parse.c


build-flv/src/core/ngx_parse_time.obj:	$(CORE_DEPS) \
	src/core/ngx_parse_time.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_parse_time.obj \
		src/core/ngx_parse_time.c


build-flv/src/core/ngx_inet.obj:	$(CORE_DEPS) \
	src/core/ngx_inet.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_inet.obj \
		src/core/ngx_inet.c


build-flv/src/core/ngx_file.obj:	$(CORE_DEPS) \
	src/core/ngx_file.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_file.obj \
		src/core/ngx_file.c


build-flv/src/core/ngx_crc32.obj:	$(CORE_DEPS) \
	src/core/ngx_crc32.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_crc32.obj \
		src/core/ngx_crc32.c


build-flv/src/core/ngx_murmurhash.obj:	$(CORE_DEPS) \
	src/core/ngx_murmurhash.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_murmurhash.obj \
		src/core/ngx_murmurhash.c


build-flv/src/core/ngx_md5.obj:	$(CORE_DEPS) \
	src/core/ngx_md5.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_md5.obj \
		src/core/ngx_md5.c


build-flv/src/core/ngx_sha1.obj:	$(CORE_DEPS) \
	src/core/ngx_sha1.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_sha1.obj \
		src/core/ngx_sha1.c


build-flv/src/core/ngx_rbtree.obj:	$(CORE_DEPS) \
	src/core/ngx_rbtree.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_rbtree.obj \
		src/core/ngx_rbtree.c


build-flv/src/core/ngx_radix_tree.obj:	$(CORE_DEPS) \
	src/core/ngx_radix_tree.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_radix_tree.obj \
		src/core/ngx_radix_tree.c


build-flv/src/core/ngx_slab.obj:	$(CORE_DEPS) \
	src/core/ngx_slab.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_slab.obj \
		src/core/ngx_slab.c


build-flv/src/core/ngx_times.obj:	$(CORE_DEPS) \
	src/core/ngx_times.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_times.obj \
		src/core/ngx_times.c


build-flv/src/core/ngx_shmtx.obj:	$(CORE_DEPS) \
	src/core/ngx_shmtx.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_shmtx.obj \
		src/core/ngx_shmtx.c


build-flv/src/core/ngx_connection.obj:	$(CORE_DEPS) \
	src/core/ngx_connection.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_connection.obj \
		src/core/ngx_connection.c


build-flv/src/core/ngx_cycle.obj:	$(CORE_DEPS) \
	src/core/ngx_cycle.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_cycle.obj \
		src/core/ngx_cycle.c


build-flv/src/core/ngx_spinlock.obj:	$(CORE_DEPS) \
	src/core/ngx_spinlock.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_spinlock.obj \
		src/core/ngx_spinlock.c


build-flv/src/core/ngx_rwlock.obj:	$(CORE_DEPS) \
	src/core/ngx_rwlock.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_rwlock.obj \
		src/core/ngx_rwlock.c


build-flv/src/core/ngx_cpuinfo.obj:	$(CORE_DEPS) \
	src/core/ngx_cpuinfo.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_cpuinfo.obj \
		src/core/ngx_cpuinfo.c


build-flv/src/core/ngx_conf_file.obj:	$(CORE_DEPS) \
	src/core/ngx_conf_file.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_conf_file.obj \
		src/core/ngx_conf_file.c


build-flv/src/core/ngx_module.obj:	$(CORE_DEPS) \
	src/core/ngx_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_module.obj \
		src/core/ngx_module.c


build-flv/src/core/ngx_resolver.obj:	$(CORE_DEPS) \
	src/core/ngx_resolver.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_resolver.obj \
		src/core/ngx_resolver.c


build-flv/src/core/ngx_open_file_cache.obj:	$(CORE_DEPS) \
	src/core/ngx_open_file_cache.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_open_file_cache.obj \
		src/core/ngx_open_file_cache.c


build-flv/src/core/ngx_crypt.obj:	$(CORE_DEPS) \
	src/core/ngx_crypt.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_crypt.obj \
		src/core/ngx_crypt.c


build-flv/src/core/ngx_proxy_protocol.obj:	$(CORE_DEPS) \
	src/core/ngx_proxy_protocol.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_proxy_protocol.obj \
		src/core/ngx_proxy_protocol.c


build-flv/src/core/ngx_syslog.obj:	$(CORE_DEPS) \
	src/core/ngx_syslog.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_syslog.obj \
		src/core/ngx_syslog.c


build-flv/src/event/ngx_event.obj:	$(CORE_DEPS) \
	src/event/ngx_event.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event.obj \
		src/event/ngx_event.c


build-flv/src/event/ngx_event_timer.obj:	$(CORE_DEPS) \
	src/event/ngx_event_timer.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_timer.obj \
		src/event/ngx_event_timer.c


build-flv/src/event/ngx_event_posted.obj:	$(CORE_DEPS) \
	src/event/ngx_event_posted.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_posted.obj \
		src/event/ngx_event_posted.c


build-flv/src/event/ngx_event_accept.obj:	$(CORE_DEPS) \
	src/event/ngx_event_accept.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_accept.obj \
		src/event/ngx_event_accept.c


build-flv/src/event/ngx_event_connect.obj:	$(CORE_DEPS) \
	src/event/ngx_event_connect.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_connect.obj \
		src/event/ngx_event_connect.c


build-flv/src/event/ngx_event_pipe.obj:	$(CORE_DEPS) \
	src/event/ngx_event_pipe.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_pipe.obj \
		src/event/ngx_event_pipe.c


build-flv/src/os/win32/ngx_errno.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_errno.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_errno.obj \
		src/os/win32/ngx_errno.c


build-flv/src/os/win32/ngx_alloc.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_alloc.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_alloc.obj \
		src/os/win32/ngx_alloc.c


build-flv/src/os/win32/ngx_files.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_files.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_files.obj \
		src/os/win32/ngx_files.c


build-flv/src/os/win32/ngx_shmem.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_shmem.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_shmem.obj \
		src/os/win32/ngx_shmem.c


build-flv/src/os/win32/ngx_time.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_time.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_time.obj \
		src/os/win32/ngx_time.c


build-flv/src/os/win32/ngx_process.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_process.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_process.obj \
		src/os/win32/ngx_process.c


build-flv/src/os/win32/ngx_thread.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_thread.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_thread.obj \
		src/os/win32/ngx_thread.c


build-flv/src/os/win32/ngx_socket.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_socket.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_socket.obj \
		src/os/win32/ngx_socket.c


build-flv/src/os/win32/ngx_wsarecv.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsarecv.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_wsarecv.obj \
		src/os/win32/ngx_wsarecv.c


build-flv/src/os/win32/ngx_wsarecv_chain.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsarecv_chain.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_wsarecv_chain.obj \
		src/os/win32/ngx_wsarecv_chain.c


build-flv/src/os/win32/ngx_udp_wsarecv.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_udp_wsarecv.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_udp_wsarecv.obj \
		src/os/win32/ngx_udp_wsarecv.c


build-flv/src/os/win32/ngx_wsasend.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsasend.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_wsasend.obj \
		src/os/win32/ngx_wsasend.c


build-flv/src/os/win32/ngx_wsasend_chain.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_wsasend_chain.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_wsasend_chain.obj \
		src/os/win32/ngx_wsasend_chain.c


build-flv/src/os/win32/ngx_win32_init.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_win32_init.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_win32_init.obj \
		src/os/win32/ngx_win32_init.c


build-flv/src/os/win32/ngx_user.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_user.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_user.obj \
		src/os/win32/ngx_user.c


build-flv/src/os/win32/ngx_dlopen.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_dlopen.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_dlopen.obj \
		src/os/win32/ngx_dlopen.c


build-flv/src/os/win32/ngx_event_log.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_event_log.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_event_log.obj \
		src/os/win32/ngx_event_log.c


build-flv/src/os/win32/ngx_process_cycle.obj:	$(CORE_DEPS) \
	src/os/win32/ngx_process_cycle.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/os/win32/ngx_process_cycle.obj \
		src/os/win32/ngx_process_cycle.c


build-flv/src/event/ngx_event_acceptex.obj:	$(CORE_DEPS) \
	src/event/ngx_event_acceptex.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_acceptex.obj \
		src/event/ngx_event_acceptex.c


build-flv/src/event/modules/ngx_iocp_module.obj:	$(CORE_DEPS) \
	src/event/modules/ngx_iocp_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/modules/ngx_iocp_module.obj \
		src/event/modules/ngx_iocp_module.c


build-flv/src/event/modules/ngx_win32_select_module.obj:	$(CORE_DEPS) \
	src/event/modules/ngx_win32_select_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/modules/ngx_win32_select_module.obj \
		src/event/modules/ngx_win32_select_module.c


build-flv/src/event/ngx_event_openssl.obj:	$(CORE_DEPS) \
	src/event/ngx_event_openssl.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_openssl.obj \
		src/event/ngx_event_openssl.c


build-flv/src/event/ngx_event_openssl_stapling.obj:	$(CORE_DEPS) \
	src/event/ngx_event_openssl_stapling.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/event/ngx_event_openssl_stapling.obj \
		src/event/ngx_event_openssl_stapling.c


build-flv/src/core/ngx_regex.obj:	$(CORE_DEPS) \
	src/core/ngx_regex.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/core/ngx_regex.obj \
		src/core/ngx_regex.c


build-flv/src/http/ngx_http.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http.obj \
		src/http/ngx_http.c


build-flv/src/http/ngx_http_core_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_core_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_core_module.obj \
		src/http/ngx_http_core_module.c


build-flv/src/http/ngx_http_special_response.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_special_response.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_special_response.obj \
		src/http/ngx_http_special_response.c


build-flv/src/http/ngx_http_request.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_request.obj \
		src/http/ngx_http_request.c


build-flv/src/http/ngx_http_parse.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_parse.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_parse.obj \
		src/http/ngx_http_parse.c


build-flv/src/http/modules/ngx_http_log_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_log_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_log_module.obj \
		src/http/modules/ngx_http_log_module.c


build-flv/src/http/ngx_http_request_body.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_request_body.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_request_body.obj \
		src/http/ngx_http_request_body.c


build-flv/src/http/ngx_http_variables.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_variables.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_variables.obj \
		src/http/ngx_http_variables.c


build-flv/src/http/ngx_http_script.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_script.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_script.obj \
		src/http/ngx_http_script.c


build-flv/src/http/ngx_http_upstream.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_upstream.obj \
		src/http/ngx_http_upstream.c


build-flv/src/http/ngx_http_upstream_round_robin.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_upstream_round_robin.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_upstream_round_robin.obj \
		src/http/ngx_http_upstream_round_robin.c


build-flv/src/http/ngx_http_file_cache.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_file_cache.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_file_cache.obj \
		src/http/ngx_http_file_cache.c


build-flv/src/http/ngx_http_write_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_write_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_write_filter_module.obj \
		src/http/ngx_http_write_filter_module.c


build-flv/src/http/ngx_http_header_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_header_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_header_filter_module.obj \
		src/http/ngx_http_header_filter_module.c


build-flv/src/http/modules/ngx_http_chunked_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_chunked_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_chunked_filter_module.obj \
		src/http/modules/ngx_http_chunked_filter_module.c


build-flv/src/http/modules/ngx_http_range_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_range_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_range_filter_module.obj \
		src/http/modules/ngx_http_range_filter_module.c


build-flv/src/http/modules/ngx_http_gzip_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_gzip_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_gzip_filter_module.obj \
		src/http/modules/ngx_http_gzip_filter_module.c


build-flv/src/http/ngx_http_postpone_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_postpone_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_postpone_filter_module.obj \
		src/http/ngx_http_postpone_filter_module.c


build-flv/src/http/modules/ngx_http_ssi_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssi_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_ssi_filter_module.obj \
		src/http/modules/ngx_http_ssi_filter_module.c


build-flv/src/http/modules/ngx_http_charset_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_charset_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_charset_filter_module.obj \
		src/http/modules/ngx_http_charset_filter_module.c


build-flv/src/http/modules/ngx_http_sub_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_sub_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_sub_filter_module.obj \
		src/http/modules/ngx_http_sub_filter_module.c


build-flv/src/http/modules/ngx_http_userid_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_userid_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_userid_filter_module.obj \
		src/http/modules/ngx_http_userid_filter_module.c


build-flv/src/http/modules/ngx_http_headers_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_headers_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_headers_filter_module.obj \
		src/http/modules/ngx_http_headers_filter_module.c


build-flv/src/http/ngx_http_copy_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/ngx_http_copy_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/ngx_http_copy_filter_module.obj \
		src/http/ngx_http_copy_filter_module.c


build-flv/src/http/modules/ngx_http_not_modified_filter_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_not_modified_filter_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_not_modified_filter_module.obj \
		src/http/modules/ngx_http_not_modified_filter_module.c


build-flv/src/http/modules/ngx_http_static_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_static_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_static_module.obj \
		src/http/modules/ngx_http_static_module.c


build-flv/src/http/modules/ngx_http_autoindex_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_autoindex_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_autoindex_module.obj \
		src/http/modules/ngx_http_autoindex_module.c


build-flv/src/http/modules/ngx_http_index_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_index_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_index_module.obj \
		src/http/modules/ngx_http_index_module.c


build-flv/src/http/modules/ngx_http_auth_basic_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_auth_basic_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_auth_basic_module.obj \
		src/http/modules/ngx_http_auth_basic_module.c


build-flv/src/http/modules/ngx_http_access_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_access_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_access_module.obj \
		src/http/modules/ngx_http_access_module.c


build-flv/src/http/modules/ngx_http_limit_conn_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_conn_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_limit_conn_module.obj \
		src/http/modules/ngx_http_limit_conn_module.c


build-flv/src/http/modules/ngx_http_limit_req_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_limit_req_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_limit_req_module.obj \
		src/http/modules/ngx_http_limit_req_module.c


build-flv/src/http/modules/ngx_http_geo_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_geo_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_geo_module.obj \
		src/http/modules/ngx_http_geo_module.c


build-flv/src/http/modules/ngx_http_map_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_map_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_map_module.obj \
		src/http/modules/ngx_http_map_module.c


build-flv/src/http/modules/ngx_http_split_clients_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_split_clients_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_split_clients_module.obj \
		src/http/modules/ngx_http_split_clients_module.c


build-flv/src/http/modules/ngx_http_referer_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_referer_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_referer_module.obj \
		src/http/modules/ngx_http_referer_module.c


build-flv/src/http/modules/ngx_http_rewrite_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_rewrite_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_rewrite_module.obj \
		src/http/modules/ngx_http_rewrite_module.c


build-flv/src/http/modules/ngx_http_ssl_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_ssl_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_ssl_module.obj \
		src/http/modules/ngx_http_ssl_module.c


build-flv/src/http/modules/ngx_http_proxy_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_proxy_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_proxy_module.obj \
		src/http/modules/ngx_http_proxy_module.c


build-flv/src/http/modules/ngx_http_fastcgi_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_fastcgi_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_fastcgi_module.obj \
		src/http/modules/ngx_http_fastcgi_module.c


build-flv/src/http/modules/ngx_http_uwsgi_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_uwsgi_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_uwsgi_module.obj \
		src/http/modules/ngx_http_uwsgi_module.c


build-flv/src/http/modules/ngx_http_scgi_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_scgi_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_scgi_module.obj \
		src/http/modules/ngx_http_scgi_module.c


build-flv/src/http/modules/ngx_http_memcached_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_memcached_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_memcached_module.obj \
		src/http/modules/ngx_http_memcached_module.c


build-flv/src/http/modules/ngx_http_empty_gif_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_empty_gif_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_empty_gif_module.obj \
		src/http/modules/ngx_http_empty_gif_module.c


build-flv/src/http/modules/ngx_http_browser_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_browser_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_browser_module.obj \
		src/http/modules/ngx_http_browser_module.c


build-flv/src/http/modules/ngx_http_upstream_hash_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_hash_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_upstream_hash_module.obj \
		src/http/modules/ngx_http_upstream_hash_module.c


build-flv/src/http/modules/ngx_http_upstream_ip_hash_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_ip_hash_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_upstream_ip_hash_module.obj \
		src/http/modules/ngx_http_upstream_ip_hash_module.c


build-flv/src/http/modules/ngx_http_upstream_least_conn_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_least_conn_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_upstream_least_conn_module.obj \
		src/http/modules/ngx_http_upstream_least_conn_module.c


build-flv/src/http/modules/ngx_http_upstream_keepalive_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_keepalive_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_upstream_keepalive_module.obj \
		src/http/modules/ngx_http_upstream_keepalive_module.c


build-flv/src/http/modules/ngx_http_upstream_zone_module.obj:	$(CORE_DEPS) $(HTTP_DEPS) \
	src/http/modules/ngx_http_upstream_zone_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/src/http/modules/ngx_http_upstream_zone_module.obj \
		src/http/modules/ngx_http_upstream_zone_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp.obj \
		../../../car-eye-http-flv-module/ngx_rtmp.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_init.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_init.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_init.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_init.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_handshake.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_handshake.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_handshake.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_handshake.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_handler.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_handler.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_handler.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_handler.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_amf.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_amf.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_amf.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_amf.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_send.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_send.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_send.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_send.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_shared.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_shared.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_shared.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_shared.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_eval.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_eval.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_eval.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_eval.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_receive.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_receive.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_receive.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_receive.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_core_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_core_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_core_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_core_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_cmd_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_cmd_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_cmd_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_cmd_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_codec_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_codec_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_codec_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_codec_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_access_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_access_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_access_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_access_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_record_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_record_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_record_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_record_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_gop_cache_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_gop_cache_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_gop_cache_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_gop_cache_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_live_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_live_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_live_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_live_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_live_index_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_flv_live_index_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_live_index_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_flv_live_index_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_play_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_play_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_play_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_play_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_flv_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_flv_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_flv_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_mp4_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_mp4_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_mp4_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_mp4_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_netcall_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_netcall_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_netcall_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_netcall_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_relay_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_relay_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_relay_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_relay_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_bandwidth.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_bandwidth.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_bandwidth.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_bandwidth.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_exec_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_exec_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_exec_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_exec_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_auto_push_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_auto_push_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_auto_push_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_auto_push_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_notify_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_notify_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_notify_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_notify_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_log_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_log_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_log_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_log_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_limit_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_limit_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_limit_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_limit_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_bitop.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_bitop.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_bitop.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_bitop.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_proxy_protocol.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_proxy_protocol.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_proxy_protocol.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_proxy_protocol.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_variables.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_variables.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_variables.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_variables.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_parse.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_parse.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_parse.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_parse.c


build-flv/addon/hls/ngx_rtmp_hls_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/hls/ngx_rtmp_hls_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/hls/ngx_rtmp_hls_module.obj \
		../../../car-eye-http-flv-module/hls/ngx_rtmp_hls_module.c


build-flv/addon/dash/ngx_rtmp_dash_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/dash/ngx_rtmp_dash_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/dash/ngx_rtmp_dash_module.obj \
		../../../car-eye-http-flv-module/dash/ngx_rtmp_dash_module.c


build-flv/addon/hls/ngx_rtmp_mpegts.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/hls/ngx_rtmp_mpegts.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/hls/ngx_rtmp_mpegts.obj \
		../../../car-eye-http-flv-module/hls/ngx_rtmp_mpegts.c


build-flv/addon/dash/ngx_rtmp_mp4.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/dash/ngx_rtmp_mp4.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/dash/ngx_rtmp_mp4.obj \
		../../../car-eye-http-flv-module/dash/ngx_rtmp_mp4.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_stat_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_stat_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_stat_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_stat_module.c


build-flv/addon/car-eye-http-flv-module/ngx_rtmp_control_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_rtmp_control_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_rtmp_control_module.obj \
		../../../car-eye-http-flv-module/ngx_rtmp_control_module.c


build-flv/addon/car-eye-http-flv-module/ngx_http_flv_live_module.obj:	$(ADDON_DEPS) \
	../../../car-eye-http-flv-module/ngx_http_flv_live_module.c
	$(CC) -c $(CFLAGS) -Yungx_config.h -Fpbuild-flv/ngx_config.pch $(ALL_INCS) \
		-Fobuild-flv/addon/car-eye-http-flv-module/ngx_http_flv_live_module.obj \
		../../../car-eye-http-flv-module/ngx_http_flv_live_module.c


build-flv/nginx.res:	 src/os/win32/nginx.ico
	rc -fobuild-flv/nginx.res $(CORE_INCS) src/os/win32/nginx.rc


build-flv/ngx_config.pch:	src/core/ngx_config.h src/os/win32/ngx_win32_config.h build-flv/ngx_auto_config.h
	$(CC) $(CFLAGS) -Ycngx_config.h -Fpbuild-flv/ngx_config.pch -c $(ALL_INCS) -Fobuild-flv/ngx_pch.obj build-flv/ngx_pch.c


../pcre/pcre.lib:	../pcre/pcre.h build-flv/Makefile
	$(MAKE) -f auto/lib/pcre/makefile.msvc PCRE="../pcre" CPU_OPT="" LIBC=-MT

../pcre/pcre.h:
	$(MAKE) -f auto/lib/pcre/makefile.msvc PCRE="../pcre" pcre.h


#./include/openssl/include/openssl/ssl.h:	build-flv/Makefile
#	$(MAKE) -f auto/lib/openssl/makefile.msvc					OPENSSL="./include" OPENSSL_OPT=""


../zlib/zlib.lib:	build-flv/Makefile
	$(MAKE) -f auto/lib/zlib/makefile.msvc CPU_OPT="" LIBC=-MT ZLIB="../zlib"


#manpage:	build-flv/nginx.8

#build-flv/nginx.8:	docs/man/nginx.8 build-flv/ngx_auto_config.h
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
	cp build-flv/nginx '$(DESTDIR)/nginx.exe'

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
