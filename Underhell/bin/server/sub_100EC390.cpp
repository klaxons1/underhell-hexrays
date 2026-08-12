int __thiscall sub_100EC390(_DWORD *this, int a2)
{
  int v2; // edi
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v2 = a2;
  result = sub_100E91A0(this, a2);
  if ( result == -1 )
  {
    v8 = 0;
    v10 = 0;
    v7 = 0;
    v9 = 0;
    v5 = *(_DWORD *)sub_10162BE0(&a2, v2);
    v6 = this[39];
    v8 = v5;
    return sub_102A4E30(v6, &v7);
  }
  return result;
}
