_DWORD *__cdecl sub_102F1A10(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)sub_100D6340(1732);
  v3 = v2;
  if ( v2 )
  {
    sub_1020CE30(v2);
    *v3 = &CItem_ItemCrate::`vftable';
    v3[280] = &CItem_ItemCrate::`vftable';
    v3[281] = &CItem_ItemCrate::`vftable';
    v3[430] = -1;
    v3[427] = 0;
    v3[431] = 5;
    (*(void (__thiscall **)(_DWORD *, int))(*v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
