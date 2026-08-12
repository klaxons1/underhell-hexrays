int __thiscall sub_10256960(_DWORD *this)
{
  char *v2; // eax
  _DWORD *v3; // eax
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int result; // eax

  sub_10255CE0((int)this);
  v2 = (char *)this[274];
  if ( !v2 )
    v2 = (char *)String;
  v3 = sub_1012BF20(&dword_1069E3E0, 0, v2, 0, 0, 0, 0);
  if ( v3 )
    this[273] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 8))(v3);
  else
    this[273] = -1;
  v4 = this[273];
  if ( v4 == -1 )
    return Warning("TriggerProximity - Missing measure target or measure target with no origin!\n");
  v5 = &off_1061BE18[4 * (this[273] & 0xFFF) + 1];
  v6 = v4 >> 12;
  if ( off_1061BE18[4 * (this[273] & 0xFFF) + 2] != v6 || !*v5 )
    return Warning("TriggerProximity - Missing measure target or measure target with no origin!\n");
  result = off_1061BE18[4 * (this[273] & 0xFFF) + 2] == v6 ? *v5 : 0;
  if ( !*(_DWORD *)(result + 24) )
    return Warning("TriggerProximity - Missing measure target or measure target with no origin!\n");
  return result;
}
