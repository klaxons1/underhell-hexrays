void __userpurge sub_103A5DE0(int a1@<ecx>, float a2@<esi>, float a3)
{
  float *v4; // ecx
  float *v5; // eax
  float v6; // [esp+4h] [ebp-30h]
  float v8[3]; // [esp+Ch] [ebp-28h] BYREF
  int v9[3]; // [esp+18h] [ebp-1Ch] BYREF
  int v10[3]; // [esp+24h] [ebp-10h] BYREF
  float v11; // [esp+30h] [ebp-4h]

  if ( a3 > 0.0 )
  {
    if ( sub_103A5070(a1) )
    {
      v5 = sub_103A50F0(v4, v8);
    }
    else
    {
      if ( !(*(int (**)(void))(*(_DWORD *)a1 + 368))() )
        return;
      v5 = (float *)sub_100217F0((void *)a1);
    }
    v10[0] = *(int *)v5;
    v10[1] = *((int *)v5 + 1);
    v10[2] = *((int *)v5 + 2);
    v11 = 64.0;
    if ( sub_1032A070((void *)a1) )
      v11 = 32.0;
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v6 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)a1 + 2256))(a1, LODWORD(v11));
    sub_10329B60((_DWORD *)a1, (int)v9, (float *)v10, (float *)(a1 + 580), v6, a2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 2216))(a1, LODWORD(a3));
  }
}
