#ifndef CALLFRAME_TRACKING_H
#define CALLFRAME_TRACKING_H

#include "wycinwyc.h"

#include "panda/plugin.h"
#include "panda/plugin_plugin.h"

#include "../callstack_instr/callstack_instr.h"
#include "../callstack_instr/callstack_instr_ext.h"

#include <capstone/capstone.h>


extern std::map<target_ulong, std::vector<cs_insn>> tb_insns_map;
bool enable_callframe_tracking(void *self, panda_cb pcb);

int after_block_exec_callstack_cb(CPUState *cpu, TranslationBlock *tb);
int after_block_translate_callstack_cb(CPUState *env, TranslationBlock *tb);


#endif
