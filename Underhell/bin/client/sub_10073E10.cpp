_DWORD *sub_10073E10()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_100DDA40(840);
  if ( !result )
    return 0;
  *result = &CCamoMaterialProxy::`vftable';
  result[207] = &CCamoTextureRegen::`vftable';
  result[208] = result;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[209] = 0;
  return result;
}
