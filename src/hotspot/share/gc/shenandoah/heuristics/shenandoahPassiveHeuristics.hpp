/*
 * Copyright (c) 2018, Red Hat, Inc. All rights reserved.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Oracle, 500 Oracle Parkway, Redwood Shores, CA 94065 USA
 * or visit www.oracle.com if you need additional information or have any
 * questions.
 *
 */

#ifndef SHARE_GC_SHENANDOAH_HEURISTICS_SHENANDOAHPASSIVEHEURISTICS_HPP
#define SHARE_GC_SHENANDOAH_HEURISTICS_SHENANDOAHPASSIVEHEURISTICS_HPP

#include "gc/shenandoah/shenandoahHeuristics.hpp"

class ShenandoahPassiveHeuristics : public ShenandoahHeuristics {
public:
  ShenandoahPassiveHeuristics();

  virtual bool should_start_gc() const;

  virtual bool should_process_references();

  virtual bool should_unload_classes();

  virtual bool should_degenerate_cycle();

  virtual void choose_collection_set_from_regiondata(ShenandoahCollectionSet* set,
                                                     RegionData* data, size_t data_size,
                                                     size_t free);

  virtual const char* name();

  virtual bool is_diagnostic();

  virtual bool is_experimental();
};

#endif // SHARE_GC_SHENANDOAH_HEURISTICS_SHENANDOAHPASSIVEHEURISTICS_HPP
