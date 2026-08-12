int __thiscall sub_1026FF60(int this, int a2)
{
  int (__thiscall ***v4)(void *, int, int); // ecx
  int v5; // [esp+10h] [ebp-14h] BYREF
  int v6; // [esp+14h] [ebp-10h] BYREF
  int v7; // [esp+18h] [ebp-Ch] BYREF
  int v8; // [esp+1Ch] [ebp-8h] BYREF
  int v9; // [esp+20h] [ebp-4h] BYREF

  sub_1024E7E0(this, a2);
  (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 440) + 784))(*(_DWORD *)(this + 440), &v5, &a2);
  sub_102361A0(*(int (__thiscall ****)(void *, int, int))(this + 440), v5, a2);
  a2 += 100;
  v5 += 100;
  sub_102361A0((int (__thiscall ***)(void *, int, int))this, v5, a2);
  if ( (*(_BYTE *)(this + 460) & 2) != 0 )
    return sub_1024F5B0((int (__thiscall ***)(void *, int, int))this);
  v4 = *(int (__thiscall ****)(void *, int, int))(this + 456);
  if ( v4 )
  {
    sub_10236170(v4, (int)&v9, (int)&v7);
    sub_102361D0(*(int (__thiscall ****)(void *, int, int))(this + 456), (int)&v8, (int)&v6);
    return sub_10236140((int (__thiscall ***)(void *, int, int))this, v9 + (v8 - v5) / 2, v7 + (v6 - a2) / 2);
  }
  else
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_1047CA6C + 148))(dword_1047CA6C, &v8, &v9);
    return sub_10236140((int (__thiscall ***)(void *, int, int))this, (v8 - v5) / 2, (v9 - a2) / 2);
  }
}
