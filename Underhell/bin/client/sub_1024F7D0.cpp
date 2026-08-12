char __usercall sub_1024F7D0@<al>(int a1@<ecx>, int a2@<ebx>)
{
  _DWORD *v3; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // edi
  char result; // al
  float v10; // [esp+8h] [ebp-14h]
  int v11; // [esp+18h] [ebp-4h]

  sub_1023E950((_DWORD *)a1, a2, a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 128))(a1) && *(float *)(a1 + 364) > 0.0 )
  {
    if ( *(_BYTE *)(a1 + 359) )
    {
      if ( sub_10236700((float *)a1) < 1 )
        sub_1024EED0((_BYTE *)a1);
    }
    else if ( !*(_BYTE *)(a1 + 358) )
    {
      *(_BYTE *)(a1 + 358) = 1;
      sub_102366F0((float *)a1, 0);
      v10 = *(float *)(a1 + 364);
      v3 = (_DWORD *)sub_10248A20();
      sub_10247080(v3, (int (__thiscall ***)(_DWORD))a1, "alpha", 255.0, 0.0, v10, 0, 0.0);
    }
  }
  LOBYTE(v11) = 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 16))(dword_1047CA68);
  if ( v4 )
  {
    v5 = dword_1047CA70;
    v6 = *(_DWORD *)dword_1047CA70;
    v7 = (**(int (__thiscall ***)(int))a1)(a1);
    if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(v6 + 88))(v5, v4, v7) )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68)
        || (v8 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68),
            v8 == (**(int (__thiscall ***)(int))a1)(a1)) )
      {
        LOBYTE(v11) = 1;
      }
    }
  }
  result = v11;
  if ( (_BYTE)v11 == *(_BYTE *)(a1 + 354) )
  {
    *(_BYTE *)(a1 + 401) = 0;
  }
  else if ( *(_BYTE *)(a1 + 401) )
  {
    *(_BYTE *)(a1 + 401) = 0;
    *(_BYTE *)(a1 + 354) = v11;
    return sub_1024DBA0(a1, v11);
  }
  else
  {
    *(_BYTE *)(a1 + 401) = 1;
  }
  return result;
}
