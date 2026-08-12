// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_101812F0@<eax>(int a1@<edi>, int a2@<esi>, int *a3, int a4, int a5)
{
  int v5; // eax
  int v6; // eax
  int v8; // [esp-8h] [ebp-1814h]
  int v9; // [esp-4h] [ebp-1810h]
  char Destination[2048]; // [esp+0h] [ebp-180Ch] BYREF
  char v11[2048]; // [esp+800h] [ebp-100Ch] BYREF
  char v12[2048]; // [esp+1000h] [ebp-80Ch] BYREF
  _DWORD v13[3]; // [esp+1800h] [ebp-Ch] BYREF

  v13[0] = a4;
  v13[2] = a4;
  v13[1] = -1;
  if ( !(unsigned __int8)sub_101825E0((int)"classname", v12) )
    Error("classname missing from entity!\n");
  *a3 = 0;
  if ( a5 )
  {
    if ( !(**(unsigned __int8 (__thiscall ***)(int, char *, int, int))a5)(a5, v12, a1, a2) )
    {
      if ( (unsigned __int8)sub_10182600(Destination, v11) )
      {
        while ( (unsigned __int8)sub_10181FD0(Destination, v11) )
          ;
      }
      return sub_100019E0(v13);
    }
    v5 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)a5 + 4))(a5, v12);
  }
  else
  {
    v6 = sub_10264CF0(a1, a2);
    v5 = (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)v6 + 4))(v6, v12, v8, v9);
    dword_1069727C = 0;
    if ( v5 )
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 28))(v5);
  }
  *a3 = v5;
  if ( v5 )
  {
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v5 + 116))(v5, v13);
    return sub_100019E0(v13);
  }
  Warning("Can't init %s\n", v12);
  return sub_100019E0(v13);
}
