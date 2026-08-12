void __thiscall sub_100F6D70(int this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  float v8[3]; // [esp+Ch] [ebp-18h] BYREF
  float v9[3]; // [esp+18h] [ebp-Ch] BYREF

  ++*(_DWORD *)(this + 180);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 68))(a2);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3);
  v7 = v6;
  if ( v5 && v6 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a4 + 4))(a4, v8);
    (**(void (__thiscall ***)(int, float *))a4)(a4, v9);
    if ( !*(_BYTE *)(this + 184) )
    {
      sub_100F6350(v5, v7, v8, v9);
      --*(_DWORD *)(this + 180);
      return;
    }
    sub_100F6D00((int *)this, v5, v7, 0, v8, v9);
  }
  --*(_DWORD *)(this + 180);
}
