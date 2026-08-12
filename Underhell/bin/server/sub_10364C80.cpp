char sub_10364C80()
{
  char result; // al

  sub_1004BBC0(&dword_106E7E10, (int)"CNPC_EnemyFinder", (int)dword_10690E5C, (int)&dword_10690E10);
  sub_1007DAB0(dword_106E7E5C, (int)dword_1069528C, (int)&unk_10690E74);
  result = sub_1007DB90(dword_106E7E14, (int)"SCHED_EFINDER_SEARCH", 88, "schedule", off_10672E48);
  if ( result )
  {
    if ( byte_10672E40 )
    {
      result = sub_100A7A40(&dword_10694898, "CNPC_EnemyFinder", (int)off_10672E7C, (int)&dword_106E7E10);
      byte_10672E40 = result;
    }
  }
  return result;
}
