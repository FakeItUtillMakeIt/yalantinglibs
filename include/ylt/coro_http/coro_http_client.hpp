/*
 * Copyright (c) 2023, Alibaba Group Holding Limited;
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once
#ifdef YLT_ENABLE_SSL
#define CINATRA_ENABLE_SSL
#endif
#include <ylt/easylog.hpp>
#define CINATRA_LOG_ERROR ELOG_ERROR
#define CINATRA_LOG_WARNING ELOG_WARN
#define CINATRA_LOG_INFO ELOG_INFO
#define CINATRA_LOG_DEBUG ELOG_DEBUG
#define CINATRA_LOG_TRACE ELOG_TRACE

#include <cinatra/coro_http_client.hpp>

namespace coro_http {
using coro_http_client = cinatra::coro_http_client;
using req_content_type = cinatra::req_content_type;
using resp_data = cinatra::resp_data;
using http_method = cinatra::http_method;
template <typename String>
using req_context = cinatra::req_context<String>;
}  // namespace coro_http