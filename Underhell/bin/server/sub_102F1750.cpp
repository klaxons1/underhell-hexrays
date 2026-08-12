void __usercall sub_102F1750(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106B3CDC + 164))(dword_106B3CDC, a1) )
  {
    sub_1020B300((int)a1);
    a1[115] = *sub_10162BE0(&v4, off_106695F4[a1[426]]);
    sub_100D8500(a1);
    if ( a1[423] )
    {
      (*(void (__thiscall **)(_DWORD *))(*a1 + 100))(a1);
      (*(void (__thiscall **)(_DWORD *, char *))(*a1 + 104))(a1, off_106695F4[a1[426]]);
      a1[63] |= 0x200000u;
      sub_10211600((int)a1, a2);
    }
    else
    {
      v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a1[6]);
      Warning("CItem_ItemCrate(%i):  CRATE_SPECIFIC_ITEM with NULL ItemClass string (deleted)!!!\n", v3);
      sub_1025FAC0((int)a1);
    }
  }
  else
  {
    sub_1025FAC0((int)a1);
  }
}
