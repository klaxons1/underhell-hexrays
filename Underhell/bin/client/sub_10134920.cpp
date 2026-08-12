int __thiscall sub_10134920(int *this, int a2, int a3, int a4)
{
  int result; // eax
  int v5; // ebx
  int v7; // ecx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // [esp+Ch] [ebp-14h] BYREF
  int v13; // [esp+10h] [ebp-10h]
  int v14; // [esp+14h] [ebp-Ch]
  int v15; // [esp+18h] [ebp-8h]

  result = a2;
  v5 = a4;
  v7 = this[14422];
  v8 = a3;
  v15 = 1;
  v12 = a2;
  LOWORD(a2) = -14336;
  BYTE2(a2) = 0;
  if ( v7 > 0 )
  {
    v9 = a4 * this[14420];
    v13 = a3 - this[14440] + 29;
    v14 = v9 / v7;
    result = sub_10134600(this, &v12, &a2, &a2, 255, 255);
  }
  v10 = this[14421];
  if ( v10 > 0 )
  {
    v11 = v5 * this[14419] / v10;
    v13 = v8 - this[14440] + 44;
    v14 = v11;
    return sub_10134600(this, &v12, &a2, &a2, 255, 255);
  }
  return result;
}
