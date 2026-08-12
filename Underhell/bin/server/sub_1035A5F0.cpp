int __thiscall sub_1035A5F0(int this, int a2)
{
  int v3; // ecx
  int v5; // [esp-Ch] [ebp-14h] BYREF
  int v6; // [esp-8h] [ebp-10h]
  int v7; // [esp-4h] [ebp-Ch]

  if ( !*(_BYTE *)(this + 4994) )
    return sub_100C9AD0((_DWORD *)this, a2);
  if ( sub_10023D10((_DWORD *)this, 32)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
    && !*(_BYTE *)(this + 4993) )
  {
    v7 = this;
    v6 = this;
    v5 = v3;
    *(_BYTE *)(this + 4993) = 1;
    sub_1029BE60(&v5, a2);
    sub_1002A0F0((int *)(this + 3088), v5, v6, v7);
  }
  return 4;
}
