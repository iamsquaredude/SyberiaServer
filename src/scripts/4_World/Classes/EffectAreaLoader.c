modded class EffectAreaLoader
{
    
    
    static JsonDataContaminatedAreas GetData()
	{
        /*ref JsonDataContaminatedAreas data = new JsonDataContaminatedAreas();
        data.Areas = new array<ref JsonDataContaminatedArea>;
        data.SafePositions = new array<ref array<float>>;
		return data;*/
		JsonDataContaminatedAreas data;

		JsonFileLoader<JsonDataContaminatedAreas>.JsonLoadFile( m_Path, data );
		
		return data;
    }
};
