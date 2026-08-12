void __thiscall sub_103AF960(float *this, int a2, int *a3, int a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  _BYTE v7[12]; // [esp+4h] [ebp-1Ch] BYREF
  _BYTE v8[12]; // [esp+10h] [ebp-10h] BYREF
  float *v9; // [esp+1Ch] [ebp-4h]

  v9 = this;
  if ( a3 )
  {
    if ( (dword_1069042C & 1) == 0 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 24))(a2);
      v5 = *a3;
      v6 = (*(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)v4 + 504))(v4, v7, 1);
      (*(void (__thiscall **)(int *, _BYTE *, int))(v5 + 520))(a3, v8, v6);
      sub_103AF830(v9, a2, (int)v8, a4);
    }
  }
}
