char __thiscall sub_10029FD0(char *this, int a2)
{
  char v3; // al
  void (__thiscall *v4)(char *); // edx
  int v5; // eax
  float *v6; // eax
  int (__thiscall *v7)(char *, char *, float *, _DWORD); // edx
  char v8; // bl
  _BYTE v10[12]; // [esp+8h] [ebp-1Ch] BYREF
  float v11[3]; // [esp+14h] [ebp-10h] BYREF
  bool v12; // [esp+23h] [ebp-1h]

  v3 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 2168))(this);
  v4 = *(void (__thiscall **)(char *))(*(_DWORD *)this + 2172);
  v12 = v3 == 0;
  v4(this);
  if ( sub_100CF460(this) )
  {
    v5 = sub_100CF460(this);
    v6 = (float *)(*(int (__thiscall **)(int, _BYTE *, int, int))(*(_DWORD *)a2 + 520))(a2, v10, v5 + 716, 1);
  }
  else
  {
    v6 = (float *)(*(int (__thiscall **)(int, _BYTE *, char *, int))(*(_DWORD *)a2 + 520))(a2, v10, this + 716, 1);
  }
  v7 = *(int (__thiscall **)(char *, char *, float *, _DWORD))(*(_DWORD *)this + 2024);
  v11[0] = *v6;
  v11[1] = v6[1];
  v11[2] = v6[2];
  v8 = v7(this, this + 716, v11, 0);
  if ( v12 )
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 2176))(this);
  return v8;
}
