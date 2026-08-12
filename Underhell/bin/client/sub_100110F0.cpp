int __thiscall sub_100110F0(int *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // edx
  _DWORD v6[4]; // [esp+8h] [ebp-20h] BYREF
  int v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+1Ch] [ebp-Ch]
  int v9; // [esp+20h] [ebp-8h]
  int v10; // [esp+24h] [ebp-4h]

  result = sub_1000F270(this, a2);
  if ( result == -1 )
  {
    v7 = 0;
    v9 = 0;
    v10 = 0;
    memset(v6, 0, 12);
    v6[3] = -1;
    v8 = 0;
    v4 = sub_100AF260(a2);
    v5 = this[52];
    v7 = v4;
    return sub_10010590(this + 49, v5, v6);
  }
  return result;
}
