// Copyright 2014 Samsung Electronics Co., Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

var i = 0;
for (; i < 100; i++) {}
assertEquals (i, 100);

for (var j = 0; j < 100; j++) {}
assertEquals (i, 100);

for (i = 0;;) {
	if (i == 100) {
		break;
		assertUnreachable ();
	}
	i++;
}
assertEquals (i, 100);

for (i = 0; i < 10; i++) {
	for (j = 0; j < 10; j++) {}
}
assertEquals (i, 100);
assertEquals (j, 100);