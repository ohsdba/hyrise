#pragma once

#include "utils/meta_tables/abstract_meta_table.hpp"
#include "meta_system_utilization_table.hpp"

namespace opossum {

/**
 * This is a class for showing information about static system properties such as hardware capabilities.
 */
class MetaSystemInformationTable : public AbstractMetaTable {
 public:
  MetaSystemInformationTable();

  const std::string& name() const final;

 protected:
  std::shared_ptr<Table> _on_generate();

  MetaSystemUtilizationTable::SystemMemoryUsage _get_system_memory_usage();
};

}  // namespace opossum
