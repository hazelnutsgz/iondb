/******************************************************************************/
/**
@file		test_iinq_rewrite.c
@author		Kai Neubauer
@brief		iinq tests.
@copyright	Copyright 2017
			The University of British Columbia,
			IonDB Project Contributors (see AUTHORS.md)
@par Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:

@par 1.Redistributions of source code must retain the above copyright notice,
	this list of conditions and the following disclaimer.

@par 2.Redistributions in binary form must reproduce the above copyright notice,
	this list of conditions and the following disclaimer in the documentation
	and/or other materials provided with the distribution.

@par 3.Neither the name of the copyright holder nor the names of its contributors
	may be used to endorse or promote products derived from this software without
	specific prior written permission.

@par THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
	AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
	IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
	ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
	LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
	CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
	SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
	INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
	CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
	ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
	POSSIBILITY OF SUCH DAMAGE.
*/
/******************************************************************************/

#include "test_iinq_rewrite.h"

void
iinq_rewrite_test_select_all_from(
		planck_unit_test_t *tc
) {
	UNUSED(tc);
}

void
iinq_rewrite_test_select_all_from_where(
		planck_unit_test_t *tc
) {
	UNUSED(tc);
}

void
iinq_rewrite_test_select_all_from_where_orderby(
		planck_unit_test_t * tc
) {
	UNUSED(tc);
}

planck_unit_suite_t *
iinq_rewrite_get_suite(
) {
	planck_unit_suite_t *suite = planck_unit_new_suite();

	PLANCK_UNIT_ADD_TO_SUITE(suite, iinq_rewrite_test_select_all_from);
	PLANCK_UNIT_ADD_TO_SUITE(suite, iinq_rewrite_test_select_all_from_where);
	PLANCK_UNIT_ADD_TO_SUITE(suite, iinq_rewrite_test_select_all_from_where_orderby);

	return suite;
}

void
run_all_tests_iinq_rewrite(
) {
	planck_unit_suite_t *suite = iinq_rewrite_get_suite();

	planck_unit_run_suite(suite);
	planck_unit_destroy_suite(suite);

	fremove(ION_MASTER_TABLE_FILENAME);
}