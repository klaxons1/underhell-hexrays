char sub_1037E8C0()
{
  char result; // al

  sub_1004BBC0(&dword_106E9948, (int)"CNPC_Ichthyosaur", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E9994, (int)dword_1069528C, (int)&unk_10690E74);
  result = sub_1007DB90(dword_106E994C, (int)"SCHED_ICH_CHASE_ENEMY", 88, "schedule", off_1067514C[0]);
  if ( result )
  {
    result = sub_1007DB90(dword_106E994C, (int)"SCHED_ICH_PATROL_RUN", 89, "schedule", off_1067514C[0]);
    if ( result )
    {
      result = sub_1007DB90(dword_106E994C, (int)"SCHED_ICH_PATROL_WALK", 90, "schedule", off_1067514C[0]);
      if ( result )
      {
        result = sub_1007DB90(dword_106E994C, (int)"SCHED_ICH_DROWN_VICTIM", 91, "schedule", off_1067514C[0]);
        if ( result )
        {
          result = sub_1007DB90(dword_106E994C, (int)"SCHED_ICH_MELEE_ATTACK1", 92, "schedule", off_1067514C[0]);
          if ( result )
          {
            result = sub_1007DB90(dword_106E994C, (int)"SCHED_ICH_THRASH", 93, "schedule", off_1067514C[0]);
            if ( result )
            {
              result = sub_1007DB90(
                         dword_106E9964,
                         (int)"TASK_ICH_GET_PATH_TO_RANDOM_NODE",
                         150,
                         "task",
                         off_1067514C[0]);
              if ( result )
              {
                result = sub_1007DB90(
                           dword_106E9964,
                           (int)"TASK_ICH_GET_PATH_TO_DROWN_NODE",
                           151,
                           "task",
                           off_1067514C[0]);
                if ( result )
                {
                  result = sub_1007DB90(dword_106E9964, (int)"TASK_ICH_THRASH_PATH", 152, "task", off_1067514C[0]);
                  if ( result )
                  {
                    dword_106E98B0 = sub_100032E0((int)"ACT_ICH_THRASH");
                    sub_10008F60((int)"ACT_ICH_THRASH", dword_106E98B0);
                    dword_106E98AC = sub_100032E0((int)"ACT_ICH_BITE_HIT");
                    sub_10008F60((int)"ACT_ICH_BITE_HIT", dword_106E98AC);
                    dword_106E98A8 = sub_100032E0((int)"ACT_ICH_BITE_MISS");
                    result = sub_10008F60((int)"ACT_ICH_BITE_MISS", dword_106E98A8);
                    if ( byte_10675144 )
                    {
                      result = sub_100A7A40(
                                 &dword_10694898,
                                 "CNPC_Ichthyosaur",
                                 (int)off_10675150[0],
                                 (int)&dword_106E9948);
                      byte_10675144 = result;
                      if ( result )
                      {
                        result = sub_100A7A40(
                                   &dword_10694898,
                                   "CNPC_Ichthyosaur",
                                   (int)off_10675154[0],
                                   (int)&dword_106E9948);
                        byte_10675144 = result;
                        if ( result )
                        {
                          result = sub_100A7A40(
                                     &dword_10694898,
                                     "CNPC_Ichthyosaur",
                                     (int)off_10675158[0],
                                     (int)&dword_106E9948);
                          byte_10675144 = result;
                          if ( result )
                          {
                            result = sub_100A7A40(
                                       &dword_10694898,
                                       "CNPC_Ichthyosaur",
                                       (int)off_1067515C[0],
                                       (int)&dword_106E9948);
                            byte_10675144 = result;
                            if ( result )
                            {
                              result = sub_100A7A40(
                                         &dword_10694898,
                                         "CNPC_Ichthyosaur",
                                         (int)off_10675160[0],
                                         (int)&dword_106E9948);
                              byte_10675144 = result;
                              if ( result )
                              {
                                result = sub_100A7A40(
                                           &dword_10694898,
                                           "CNPC_Ichthyosaur",
                                           (int)off_10675164,
                                           (int)&dword_106E9948);
                                byte_10675144 = result;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
