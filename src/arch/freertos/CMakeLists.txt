target_sources(csp PRIVATE
  csp_clock.c
  csp_queue.c
  csp_semaphore.c
  csp_system.c
  csp_time.c
  csp_hooks.c
)

target_include_directories(csp PUBLIC 
  ../../../../freertos/Inc
  ../../../../application/Inc
  ./include
)
