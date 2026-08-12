int __userpurge sub_102DC940@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v3; // eax
  float v6; // [esp+0h] [ebp-10h]

  v3 = *(_DWORD *)(a3 + 64);
  v6 = 0.0;
  if ( (v3 & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 3520) == *(_DWORD *)(a1 + 3524) )
      sub_1023C380((_DWORD *)a1, (int)"Player.DrownStart", v6, 0);
    else
      sub_1023C380((_DWORD *)a1, (int)"Player.DrownContinue", v6, 0);
  }
  else if ( (v3 & 8) != 0 )
  {
    sub_1023C380((_DWORD *)a1, (int)"HL2Player.BurnPain", v6, 0);
  }
  else
  {
    sub_1023C380((_DWORD *)a1, (int)"Player.Pain", v6, 0);
  }
  if ( (*(_BYTE *)(a3 + 64) & 4) != 0 && *(_DWORD *)(dword_10698344 + 48) && (*(_BYTE *)(a1 + 3416) & 4) != 0 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 1648))(a1, 0.5);
  return sub_101E8350((char *)a1, a2, a3);
}
