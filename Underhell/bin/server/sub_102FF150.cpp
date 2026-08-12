void __userpurge sub_102FF150(int a1@<ecx>, double a2@<st0>, char a3)
{
  int v4; // eax
  int v5; // eax

  v4 = *(_DWORD *)(a1 + 2372);
  if ( v4 != dword_106E2970 && v4 != dword_106E296C && (*(_BYTE *)(a1 + 256) & 1) != 0 && !sub_1002A570((_DWORD *)a1) )
  {
    sub_10023CB0((char *)a1, 73);
    if ( a3 )
    {
      v5 = sub_100BDCE0(a1, dword_106E296C);
      sub_10019B30((_DWORD *)a1, v5);
      *(float *)(a1 + 4144) = a2 + *(float *)(dword_106B31C8 + 12) + 0.1;
      sub_1023C380((_DWORD *)a1, (int)"NPC_Antlion.ZappedFlip", 0.0, 0);
    }
  }
}
