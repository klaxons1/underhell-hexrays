int __userpurge sub_10283070@<eax>(int a1@<edi>, int a2)
{
  int v2; // eax
  int v3; // esi

  v2 = sub_100D6340(828);
  if ( v2 )
    v3 = sub_10282E70(v2, a1);
  else
    v3 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(v3, a2);
  return v3 + 12;
}
